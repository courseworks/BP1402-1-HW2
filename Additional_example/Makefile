CC = g++
CXXFLAGS = -std=c++17 -Wall -c
LDFLAGS = -std=c++17

OBJECTS = src/add_two_numbers.o test/add_two_numbers_test.o test/main.o

TARGET = test_add

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -lgtest -o $(TARGET)

src/add_two_numbers.o: src/add_two_numbers.c
	$(CC) $(CXXFLAGS) src/add_two_numbers.c -o src/add_two_numbers.o

test/add_two_numbers_test.o: test/add_two_numbers_test.cpp
	$(CC) $(CXXFLAGS) test/add_two_numbers_test.cpp -o test/add_two_numbers_test.o

test/main.o: test/main.cpp
	$(CC) $(CXXFLAGS) test/main.cpp -o test/main.o

clean:
	rm -f $(TARGET) $(OBJECTS)

run:
	./$(TARGET)