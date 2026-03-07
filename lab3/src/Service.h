#ifndef SERVICE_H
#define SERVICE_H

#include "Car.h"
#include <string>

class Service {
private:
    std::string serviceName;
    double diagnosticsPrice;
    double repairPrice;
    double partsPrice;

public:
    Service(const std::string& serviceName, double diagnosticsPrice, double repairPrice, double partsPrice);

    double calculateTotalCost() const;
    void createRepairOrder(const Car& car) const;
};

#endif
