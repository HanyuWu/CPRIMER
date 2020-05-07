#include <iostream>
std::istream &func(std::istream &is) {
  std::string buf;
  while (is >> buf)
    std::cout << buf << std::endl;
  is.clear();
  return is;
}
int main() {
  std::string boo;
  std::cin >> boo;
  auto old_state = std::cin.good();
  std::cout << old_state << std::endl;
  func(std::cin >> boo);
}