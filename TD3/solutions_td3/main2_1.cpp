#include<iostream>

int main(){
    int **p = new int*[2]; // we allocate an array of size 2 of pointers to integers

    // Here we allocate the space pointed by p[0] and p[1].
    for (int i = 0; i < 2; i++)
        p[i] = new int[3];

    p[0][0] = 0;
    p[0][1] = 1;
    p[0][2] = 2;

    p[1][0] = 3;
    p[1][1] = 4;
    p[1][2] = 5;

    for (int r = 0; r < 2; r++){
        for (int c = 0; c < 3; c++){
            std::cout << p[r][c] << " ";
        }
        std::cout << std::endl;
    }

    // We need to free the memory we allocated for p[0] and p[1]
    for (int i = 0; i < 2; i++)
      delete[] p[i];

    // Note: if we just delete p, we just get rid of the array of size 2 of pointers to integers
    // but not of the two integer arrays.
    delete[] p;
}

