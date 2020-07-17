#include <iostream>
#include <string>

int main() {
  std::string myString;

  /*
    while (getline(std::cin, myString)) {
      std::cout << myString << std::endl;
    }
  */
  /*
  while (std::cin >> myString) {
    std::cout << myString << std::endl;
  }
  */
 while (getline(std::cin, myString,',')) {
      std::cout << myString << std::endl;
    }
  return 0;
}