#include <iostream>
#include <string>

int main() {
  std::string s;
  std::cin >> s;
  std::cout << s << std::endl;
  for (auto &c : s) {
    c = 'x';
  }
  std::cout << s << std::endl;
  return 0;
}