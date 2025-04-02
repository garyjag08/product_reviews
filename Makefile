# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Target and dependencies
TARGET = main
OBJS = main.o WordCount.o

# Build target
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compile main.cpp
main.o: main.cpp WordCount.h
	$(CXX) $(CXXFLAGS) -c main.cpp

# Compile WordCount.cpp
WordCount.o: WordCount.cpp WordCount.h
	$(CXX) $(CXXFLAGS) -c WordCount.cpp

# Clean up generated files
clean:
	rm -f $(TARGET) $(OBJS)

