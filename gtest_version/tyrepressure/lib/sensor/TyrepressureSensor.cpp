
#include "TyrepressureSensor.hpp"

double TyrepressureSensor::pressureValue() {
    return Sensor::popNextPressurePsiValue();
}

TyrepressureSensor::TyrepressureSensor() {

}
