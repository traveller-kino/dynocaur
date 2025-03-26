#include <stdio.h>
#include <stdbool.h> 

/*  Elements to consider (for the time being):
Powerplant
Transmission
Surfaces
Aerodynamics
Environment
*/

typedef struct Powerplant {

} Powerplant;

typedef struct Transmission {
    double[20] gearRatios; // 3.0 -> 2.0 -> 1.5 -> 1.2 -> 1.0 -> 0.85 -> 0.70
    double differentialRatio; // 3.11
} Transmission;

typedef struct Surfaces {
    double combinedStaticFriction; // 1.0
    double combinedKineticFriction; // 0.7
    double[4] sagitalGees;
    double[4] lateralGees;
    double[4] combinedGees;
    double gripLimit; // 0.75
} Surfaces;

typedef struct Aerodynamics {

} Aerodynamics;

typedef struct Environment {
    bool wet;
} Environment;

int main(){
    return 0;
}