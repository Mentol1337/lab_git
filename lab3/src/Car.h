#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int year;
    std::string problem;

public:
    Car(const std::string& brand, const std::string& model, int year, const std::string& problem);

    std::string getBrand() const;
    std::string getModel() const;
    int getYear() const;
    std::string getProblem() const;

    void showInfo() const;
};

#endif
