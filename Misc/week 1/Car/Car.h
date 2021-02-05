#ifndef CAR_H_
#include <iostream>
#define CAR_H_

class Car {
private:
    std::string type;
    std::string color;
public:
    std::string getColor();
    Car();
    virtual ~Car();
};

#endif /* CAR_H_ */