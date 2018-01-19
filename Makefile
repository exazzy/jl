CC=g++
CFLAGS=-c -Wall -std=c++11
#LDFLAGS=
SRC=$(wildcard *.cpp)
OBJS=$(SRC:.cpp=.o)
EXECUTABLE=jl

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJS) $(EXECUTABLE)
