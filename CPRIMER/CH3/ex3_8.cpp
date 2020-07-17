#include <iostream>
#include <string>
int main() {
  std::string s;
  std::cin >> s;
  std::cout << s << std::endl;
  decltype(s.size()) i = 0;
  while (i < s.size())
    s[i++] = 'x';
  std::cout << s << std::endl;

  for (i = 0; i < s.size(); s[i++] = 'y') {
  };
  std::cout << s << std::endl;
  return 0;
}