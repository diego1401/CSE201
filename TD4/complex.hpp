#pragma once
#include <iostream>
#include <cmath>

class Complex {
private:
  double real;
  double imaginary;

  public:
  Complex();
  Complex(double real, double imaginary);
  ~Complex();

  double getReal();
  double getImaginary();
  void setReal(double re);
  void setImaginary(double im);
  double magnitude();
  void normalize();
  };


