#include <iostream>

void init(int* &a, int size) {
  /* Note that here we are passing a reference, &a, to an integer pointer (int*)
   * when we assign a in the function we are also changing the variable
   * passed as actual parameter when invoking the function
   */
  a = new int[size];
  for (int i = 0; i < size; i = i + 1)
    // a[4] will be size - 4.
    a[i] = size - i;
}

int main() {
  int *m1 = NULL;
  init(m1, 5);
  // the output is 1, because we changed m1 inside init
  std::cout << m1[4] << std::endl;
  delete[] m1;
}
