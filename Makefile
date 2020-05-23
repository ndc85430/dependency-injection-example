CXX=clang++
CXXFLAGS=-std=c++11 -Wall -pedantic

test:
	$(CXX) $(CXXFLAGS) test_greet.cc greet.cc -o test_greet
	./test_greet

