#include <iostream>

int** readMatrix(int& n, int& m)
{
    std::cout << "Insert the number of rows: ";
    std::cin >> n;
    std::cout << "Insert the number of columns: ";
    std::cin >> m;

    int** myMatrix;

    myMatrix = new int*[n];

    // something is missing

    std::cout << "Set the values: "<<std::endl;

    // something is missing

    return myMatrix;
}

int main()
{
    int nA, mA;
    int** A = readMatrix(nA, mA);

    std::cout << "Your matrix is: "<<std::endl;
    // something is missing

    // something is missing
  return 0;
}
