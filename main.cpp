#include <iostream>

int max(int, int);

int main() {
  const int result = max(30, 50);

  std::cout << "The maximum number is: " << result << std::endl;
}

int max(int a, int b) {
  if (a > b)
    return a;
  else
    return b;
}