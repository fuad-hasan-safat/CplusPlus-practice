math: math_stuff.o math_util.o
	g++ math_stuff.o math_util.o -o math

math_stuff.o: math_stuff.cpp
	g++ -c math_stuff.cpp

math_util.o: math_util.cpp
	g++ -c math_util.cpp

clean:
	rm *.o math