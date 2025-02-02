#include <iostream>

int main() {
  int a = 5;
  int b = 0;
  if (b != 0) {
    int c = a / b;
    std::cout << "Result: " << c << std::endl;
  } else {
    std::cout << "Error: Division by zero!" << std::endl;
  }
  return 0;
}