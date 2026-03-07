CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
TARGET = app
SRC = src/main.cpp src/Car.cpp src/Service.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET) *.o
