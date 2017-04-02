
#ifndef TYREPRESSURE_ISENSOR_HPP
#define TYREPRESSURE_ISENSOR_HPP

class ISensor {

public:
    virtual double probe() = 0;
};


#endif //TYREPRESSURE_ISENSOR_HPP
