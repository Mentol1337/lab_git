import unittest
from main import calculate_parking_hours, calculate_parking_fee


class TestParking(unittest.TestCase):

    def test_hours(self):
        self.assertEqual(calculate_parking_hours(8, 12), 4)

    def test_fee(self):
        self.assertEqual(calculate_parking_fee(4), 80)


if __name__ == "__main__":
    unittest.main()