
#include <cstdlib>
#include "TyrepressureSensorWetTyre.hpp"

double TyrepressureSensorWetTyre::pressureValue() {
    // placeholder implementation that simulates a real sensor
    // in a real tire
    float randMax = RAND_MAX;
    int randNum = rand();
    double pressure = 10 + (float)rand()/((float)RAND_MAX/(10));
    return pressure;
}

TyrepressureSensorWetTyre::TyrepressureSensorWetTyre() {

}
