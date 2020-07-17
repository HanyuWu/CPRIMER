#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<int> vec;
  for (int buf; std::cin >> buf; vec.push_back(buf))
    ;

  if (vec.size() < 2) {
    return -1;
  }
  for (auto it = vec.cbegin(); it + 1 != vec.cend(); it++) {
    std::cout << *it + *(it + 1) << " ";
  }
  std::cout << std::endl;
  for (auto it = vec.cbegin(), it2 = vec.cend() - 1; it <= it2; ++it, --it2) {
    std::cout << *it + *(it2) << " ";
  }
  std::cout << std::endl;
  return 0;
}