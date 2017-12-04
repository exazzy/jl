CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=jl.cpp lexer.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=jl

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJECTS) $(EXECUTABLE)
