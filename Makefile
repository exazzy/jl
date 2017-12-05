CC=g++
CFLAGS=-c -Wall -std=c++11
LDFLAGS=
SOURCES=jl.cpp lexer.cpp token.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=jl

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJECTS) $(EXECUTABLE)
