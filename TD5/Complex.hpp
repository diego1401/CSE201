#pragma once

class Complex {
private:
  double real;        // the real part
  double imaginary;   // the imaginary part
  static Complex M;

  public:
    // construct the complex number zero
    Complex();

    // construct a complex number with given real and imaginary parts
    Complex(double real, double imaginary);

    double getReal();
    double getImaginary();
    void setReal(double re);
    void setImaginary(double im);
    double magnitude();
    void normalize();

    ~Complex();
};
