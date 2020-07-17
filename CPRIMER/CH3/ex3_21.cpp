#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (auto it = v.begin(); it != v.end(); it++) {
    *it *= *it;
  }
  for (auto it = v.cbegin(); it != v.cend(); it++) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
  return 0;
}