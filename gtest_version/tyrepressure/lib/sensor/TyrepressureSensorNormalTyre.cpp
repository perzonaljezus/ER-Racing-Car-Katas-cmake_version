
#include "TyrepressureSensorNormalTyre.hpp"

double TyrepressureSensorNormalTyre::pressureValue() {
    return Sensor::popNextPressurePsiValue();
}

TyrepressureSensorNormalTyre::TyrepressureSensorNormalTyre() {

}
