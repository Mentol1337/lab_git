def calculate_parking_hours(entry_time, exit_time):
    return exit_time - entry_time


def calculate_parking_fee(hours):
    """
    >>> calculate_parking_fee(2)
    40
    """
    return hours * 20


def main():
    entry = int(input("Введіть час заїзду (години): "))
    exit = int(input("Введіть час виїзду (години): "))

    hours = calculate_parking_hours(entry, exit)
    fee = calculate_parking_fee(hours)

    print(f"Тривалість: {hours} год.")
    print(f"До оплати: {fee} грн")


if __name__ == "__main__":
    main()