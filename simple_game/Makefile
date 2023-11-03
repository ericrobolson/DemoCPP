# set non-optional compiler flags here
CXXFLAGS += -std=c++11 -Wall -Wextra -pedantic-errors
CXX = g++
# find cpp files in subdirectories
SOURCES := $(shell find . -name '*.cpp')

# find headers
HEADERS := $(shell find . -name '*.hpp')

OUTPUT := target

# Everything depends on the output
all: $(OUTPUT)
	./target

# The output depends on sources and headers
$(OUTPUT): $(SOURCES) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -o $(OUTPUT) $(SOURCES)

clean:
	$(RM) $(OUTPUT)
