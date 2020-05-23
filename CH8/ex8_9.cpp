#include <iostream>
#include <sstream>
#include <string>
using std::istream;

istream &func(istream &is) {
  std::string buf;
  while (is >> buf) {
    std::cout << buf << std::endl;
  }
  is.clear();
  return is;
}

int main(){
    std::istringstream iss("hello");
    func(iss);
    std::string iss2;
    std::cin>> iss2; // just for fun
    func(std::cin);
    return 0;
}