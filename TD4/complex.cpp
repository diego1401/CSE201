#include "complex.hpp"

Complex::Complex(){
      real = 0;
      imaginary = 0;
  }
Complex::Complex(double real, double imaginary){
      this -> real = real;
      this -> imaginary = imaginary;
  }
Complex::~Complex(){
      std::cout << "Destroying number " << real << " + "
                << imaginary << " * i" << std::endl;

  }
double Complex:: getReal(){ return real; }
double Complex:: getImaginary(){ return imaginary; }
void Complex:: setReal(double re){ this->real = re; }
void Complex:: setImaginary(double im){ this->imaginary = im; }
double Complex:: magnitude(){ return sqrt(real*real + imaginary*imaginary); }
void Complex:: normalize(){
      int n = magnitude();
      if (n != 0){
          real = real/n;
          imaginary = imaginary/n;
      }
  }
