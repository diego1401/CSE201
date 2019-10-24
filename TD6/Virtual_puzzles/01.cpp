#include <iostream>
using namespace std;

class A {
public:
  virtual void print() { cout << "A" << endl; }
};

class B : public A {
public:
  void print() { std::cout << "B" << std::endl; }
};

int main()
{
  A a;
  a.print();
  B b;
  b.print();
  A ba = (A) b;
  ba.print();
}
