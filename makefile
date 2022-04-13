# List your *.h files here:
headers =

# List your *.cpp files here:
sources = main.cpp

# Specify name of your program:
executable = rt

$(executable): $(headers) $(sources)
	g++ -g -Wall -pedantic -std=c++20 $(sources) -o $(executable)

.PHONY: clean
clean:
	rm $(executable)
