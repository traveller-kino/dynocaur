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
    double gearRatios[8]; // -3.0 -> 3.0 -> 2.0 -> 1.5 -> 1.2 -> 1.0 -> 0.85 -> 0.70
    double differentialRatio; // 3.11
} Transmission;

typedef struct Axel {
    double combinedStaticFriction; // 1.0
    double combinedKineticFriction; // 0.7
    double sagitalGees[2];
    double lateralGees[2];
    double combinedGees[2];
    double gripLimit; // 0.75
    bool powered;
    bool softSpinning; // Exceeding the grip limit by a small amount causes the friction coefficients to drop to 0.1 (ice-like) randomly, for each physics tick
    bool hardSpinning; // Well exceeding the grip limit will set the friction coefficients to 0.1 no matter what
} Axel;

typedef struct Surfaces {
    Axel axels[2]; // Sticking with a normal car for now
} Surfaces;

typedef struct Aerodynamics {

} Aerodynamics;

typedef struct Environment {
    bool wet;
    bool ice;
    bool driftPhysicsEnabled; // disables TCS, and sets last axel to softSpinning mode when attempting to turn
} Environment;

typedef struct StabilityAugumentation {
    int ABSPulseRate; // 30
    bool ABSTripped; // forces brakes open until next ABS tick
    int TCSPulseRate; // 30
    bool TCSTripped; // cuts engine power until next TCS tick
} StabilityAugumentation;

int main(){
    return 0;
}