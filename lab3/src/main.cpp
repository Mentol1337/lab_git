#include "Car.h"
#include "Service.h"

int main() {
    Car car("Toyota", "Corolla", 2018, "Заміна гальмівних колодок");

    Service service("AutoMaster Service", 500.0, 1500.0, 2000.0);

    service.createRepairOrder(car);

    return 0;
}
