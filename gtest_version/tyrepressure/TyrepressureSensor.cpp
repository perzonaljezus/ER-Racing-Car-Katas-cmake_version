//
// Created by Eduard Ruffert on 31.03.17.
//

#include "TyrepressureSensor.hpp"

double TyrepressureSensor::pressureValue() {
    return Sensor::popNextPressurePsiValue();
}

TyrepressureSensor::TyrepressureSensor() {

}
