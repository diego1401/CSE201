#include <iostream>

int main() {

  /* a is a pointer to an integer (its value is
   * not initialized
   */
  int* a;

  /*
   * Allocates an array of 5 integer on the heap
   *
   * b points to the first element of the array.
   */
  int* b = new int[5];

  // assign the first element pointed by b to 0
  *b = 0;
  // a points to the same area of memory in the heap pointed by b
  a = b;

  /* At this point in the program:
   * a and b are two pointers to integer (variable on the stack).
   *
   * a and b points to the first element of an int array
   *
   * The first element of the array contains 0
   */

  /* i is initialized to *a, the value pointed by a which is the 
   * first element of the array. So i is initialized to 0.
   *
   * i starts from 0, the loop is repeated until i < 4, and i is
   * in every loop iteration. So, the loop runs 4 times.
   */
  for (int i = *a; i < 4; i = i + 1) {
    /* (b+i) is the address "i times after" the address pointed by b.
     * Here, "i times after" means the address pointed by b plus i elements
     * of type int (since an int type can be stored in 32bit, then the address
     * value will be b + (32 * i)
     *
     * *(b+i) change the value pointed by (b+1)
     *
     * *a + 1 takes the value pointed by a and increments it by 1.
     */
    *(b+i) = *a + 1;

    /* Here we make a pointing to the address "i times after" b */
    a = (b+i);
  }

  /* You can imagine what happens during the loop iterations:
   *
   * At the end of the 1st iteration:
   *   i = 1
   *   b = address of the 5 int array
   *   a = address of the 1st element in the array
   *   int array on the heap: [1, ?, ?, ?, ?]
   *
   * At the end of the 2nd iteration:
   *   i = 2
   *   b = address of the 5 int array
   *   a = address of the 2nd element in the array
   *   int array on the heap: [1, 2, ?, ?, ?]
   *
   * At the end of the 3rd iteration:
   *   i = 3
   *   b = address of the 5 int array
   *   a = address of the 3rd element in the array
   *   int array on the heap: [1, 2, 3, ?, ?]   *
   *
   * At the end of the 4st iteration:
   *   i = 4
   *   b = address of the 5 int array
   *   a = address of the 4th element in the array
   *   int array on the heap: [1, 2, 3, 4, ?]
   */

  /* We print 4 */
  std::cout << *a << std::endl;

  delete[] b;
}
