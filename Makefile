CXX=g++
CXXFLAGS=-std=c++11 -Wall -pedantic

greeter:
	$(CXX) $(CXXFLAGS) greeter.cc -o greeter

test:
	$(CXX) $(CXXFLAGS) test_greet.cc -o test_greet
	./test_greet

clean:
	rm -f greeter test_greet *~
