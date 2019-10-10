#include <iostream>
int main() {

  std::cout << "How many letters are in your word?" << std::endl;

  int n = 1;
  std::cin >> n;

  std::cout << "Write a " << n << "-long word please :)" << std::endl;

  std::string name;
  std::cin >> name;
  if (name.length() != n){
    std::cout << "That is not the correct length" << std::endl;
    return 0;
  }
  int i=0;
  bool check = true;

    while (i < n/2 and i<n-i and check){
      if(name[i] == name[n-1]){
	i= i+1;
  }
    else{
      check = false;
    }
    }
    if (check){
      std::cout << "True" << std::endl;
    }
    else{
      std::cout << "False" << std::endl;
    }
  return 0;
  }
