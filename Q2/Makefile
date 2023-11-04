CC = g++
CXXFLAGS = -std=c++17 -Wall -c
LDFLAGS = -std=c++17

OBJECTS = src/check_primes.o test/check_primes_test.o test/main.o

TARGET = test_q2

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -lgtest -o $(TARGET)

src/add_two_numbers.o: src/check_primes.c
	$(CC) $(CXXFLAGS) src/check_primes.c -o src/check_primes.o

test/add_two_numbers_test.o: test/check_primes.cpp
	$(CC) $(CXXFLAGS) test/check_primes_test.cpp -o test/check_primes_test.o

test/main.o: test/main.cpp
	$(CC) $(CXXFLAGS) test/main.cpp -o test/main.o

clean:
	rm -f $(TARGET) $(OBJECTS)

run:
	./$(TARGET)