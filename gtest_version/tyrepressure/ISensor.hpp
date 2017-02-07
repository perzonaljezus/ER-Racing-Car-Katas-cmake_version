//
// Created by Eduard Ruffert on 07/02/17.
//

#ifndef TYREPRESSURE_ISENSOR_H
#define TYREPRESSURE_ISENSOR_H


class ISensor {
public:
    virtual double popNextPressurePsiValue() = 0;
};


#endif //TYREPRESSURE_ISENSOR_H
