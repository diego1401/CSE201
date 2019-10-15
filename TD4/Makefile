CXX = g++

testComplex.o: testcomplex.cpp Complex.hpp
	$(CXX) -c testComplex.cpp
	
Complex.o: complex.cpp complex.hpp
	$(CXX) -c Complex.cpp
	
testComplex: testcomplex.o complex.o
	$(CXX) Complex.o testComplex.o -o testComplex
	

clean: 
	rm -f testComplex 
	rm -f *.o
	
