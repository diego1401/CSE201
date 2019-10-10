#include <iostream>

int** readMatrix(int& n, int& m)
{
  std::cout << "Insert the number of rows: ";
  std::cin >> n;
  std::cout << "Insert the number of columns: ";
  std::cin >> m;

  int** myMatrix;

  myMatrix = new int*[n];

  // We allocate each row of the matrix
  for (int i = 0; i < n; i++)
    myMatrix[i] = new int[m];

  std::cout << "Set the values: "<<std::endl;

  // We read each cell value from the input stream
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      std::cin >> myMatrix[i][j];

  return myMatrix;
}

int main()
{
  int nA, mA;
  int** A = readMatrix(nA, mA);

  std::cout << "Your matrix is: "<<std::endl;

  // We print the matrix
  for (int i = 0; i < nA; i++) {
    for (int j = 0; j < mA; j++)
      std::cout << A[i][j] << " ";
    std::cout << std::endl;
  }

  // We free the space dynamically allocated
  for (int i = 0; i < nA; i++)
    delete[] A[i];
  delete[] A;

  return 0;
}

