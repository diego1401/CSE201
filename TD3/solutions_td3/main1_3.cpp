#include <iostream>

void init(int* a, int size) {
  /* Here we are passing a by value!
   *
   * So, when we assigna a to the new memory in the heap
   * we do not assign the value of a back to the
   * actual parameter of the function.
   */
  a = new int[size];
  for (int i = 0; i < size; i++)
    a[i] = size - i;
  // At this point the pointer to the memory allocated on the heap
  // is lost forever, so the program will not delete such memory later.
  //
  // Since we cannot delete the memory, this will be always be allocated for
  // the whole duration of the program.
}

int main() {
  int *m1 = new int[5];

  // initialize the array [0,1,2,3,4]
  for (int i = 0; i < 5; i++) {
    *(m1+i) = i;
  }

  /* Here, init does not change the value of m1
   * that is copied in the function.
   * So, m1 still points to the array created 
   * in the heap in the main function (and not to the
   * one created inside init
   */
  init(m1, 5);
  // The value of m1[4] is 3 (and not 4)
  std::cout << m1[4] << std::endl;
  delete[] m1;
}

