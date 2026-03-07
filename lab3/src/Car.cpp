#include "Car.h"
#include <iostream>

Car::Car(const std::string& brand, const std::string& model, int year, const std::string& problem)
    : brand(brand), model(model), year(year), problem(problem) {}

std::string Car::getBrand() const {
    return brand;
}

std::string Car::getModel() const {
    return model;
}

int Car::getYear() const {
    return year;
}

std::string Car::getProblem() const {
    return problem;
}

void Car::showInfo() const {
    std::cout << "Марка: " << brand << std::endl;
    std::cout << "Модель: " << model << std::endl;
    std::cout << "Рік: " << year << std::endl;
    std::cout << "Проблема: " << problem << std::endl;
}
