#include "Service.h"
#include <iostream>

Service::Service(const std::string& serviceName, double diagnosticsPrice, double repairPrice, double partsPrice)
    : serviceName(serviceName), diagnosticsPrice(diagnosticsPrice), repairPrice(repairPrice), partsPrice(partsPrice) {}

double Service::calculateTotalCost() const {
    return diagnosticsPrice + repairPrice + partsPrice;
}

void Service::createRepairOrder(const Car& car) const {
    std::cout << "===== Заявка на ремонт =====" << std::endl;
    std::cout << "Автосервіс: " << serviceName << std::endl;

    car.showInfo();

    std::cout << "Вартість діагностики: " << diagnosticsPrice << " грн" << std::endl;
    std::cout << "Вартість ремонту: " << repairPrice << " грн" << std::endl;
    std::cout << "Вартість запчастин: " << partsPrice << " грн" << std::endl;
    std::cout << "Загальна вартість: " << calculateTotalCost() << " грн" << std::endl;
}
