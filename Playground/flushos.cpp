#include <iostream>
int main() {
  std::cout << "hi!"
            << std::endl; // writes hi and a newline, then flushes the buffer
  std::cout << "hi!"
            << std::flush; // writes hi, then flushes the buffer; adds no data
  std::cout << "hi!"
            << std::ends; // writes hi and a null, then flushes the buffer
  std::cout << &std::cin << std::endl;
}