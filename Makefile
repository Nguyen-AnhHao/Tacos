CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

TARGET = shell_sort_test
SOURCES = main.cpp sorting.cpp
HEADERS = sorting.h

$(TARGET): $(SOURCES) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

test: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: test clean