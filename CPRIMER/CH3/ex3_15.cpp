#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> vec;
  for (std::string buffer; std::cin >> buffer; vec.push_back(buffer));
  for (auto &t : vec) {
    std::cout << t;
  }
  std::cout << std::endl;
  return 0;
}