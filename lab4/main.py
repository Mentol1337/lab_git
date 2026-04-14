from datetime import datetime

parking = {}

def parkCar(car_number):
    if car_number in parking:
        print("Машина вже на парковці")
    else:
        parking[car_number] = datetime.now()
        print("Машина заїхала")

def calculateParkingFee(start_time):
    end_time = datetime.now()
    hours = (end_time - start_time).seconds // 3600 + 1
    return hours * 20

def leaveParking(car_number):
    if car_number not in parking:
        print("Машини немає на парковці")
    else:
        fee = calculateParkingFee(parking[car_number])
        del parking[car_number]
        print(f"Машина виїхала. До оплати: {fee} грн")


# тест
parkCar("AA1234BB")
leaveParking("AA1234BB")