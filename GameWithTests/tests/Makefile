# Set non-optional compiler flags here
CXXFLAGS += -std=c++11 -Wall -Wuninitialized -Wextra -pedantic-errors -Werror -DUNIT_TESTING
CXX = g++

# Directory for object files
OBJDIR := obj

# Find cpp files in subdirectories
SOURCES := $(shell find . -name '*.cpp') $(shell find ../src -name '*.cpp')

# Replace each source file with its corresponding object file
OBJECTS := $(patsubst ./%.cpp,$(OBJDIR)/%.o,$(SOURCES))

# Find headers
HEADERS := $(shell find . -name '*.hpp' -o -name '*.h') $(shell find ../src -name '*.hpp' -o -name '*.h')

OUTPUT := target

# Everything depends on the output
all: $(OUTPUT)
	./$(OUTPUT)

# The output depends on the object files and headers
$(OUTPUT): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -o $(OUTPUT) $(OBJECTS)

# Rule to generate object files
$(OBJDIR)/%.o: %.cpp $(HEADERS)
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) -r $(OBJDIR) $(OUTPUT)
