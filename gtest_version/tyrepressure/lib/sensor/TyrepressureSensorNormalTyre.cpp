
#include "TyrepressureSensorNormalTyre.hpp"

TyrepressureSensorNormalTyre::TyrepressureSensorNormalTyre() {

}

double TyrepressureSensorNormalTyre::probe() {
    return Sensor::popNextPressurePsiValue();
}