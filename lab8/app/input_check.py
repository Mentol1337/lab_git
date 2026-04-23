import sentry_sdk

# Ініціалізація Sentry (поки заглушка)
sentry_sdk.init(
    dsn="https://5de81265b92e70eafe6aabe8afe3673c@o4511270204997632.ingest.de.sentry.io/4511270206963792",  # сюди вставиш свій ключ
    traces_sample_rate=1.0
)


def check_input(user_input):
    """
    Перевіряє введений рядок.

    >>> check_input("hello")
    'HELLO'
    >>> check_input("123")
    Traceback (most recent call last):
    ...
    ValueError: Invalid input
    """
    if not user_input:
        raise ValueError("Empty input")

    if not user_input.isalpha():
        raise ValueError("Invalid input")

    return user_input.upper()


if __name__ == "__main__":
    try:
        data = input("Введіть рядок: ")
        result = check_input(data)
        print("Результат:", result)
    except Exception as e:
        sentry_sdk.capture_exception(e)
        print("Помилка:", e)