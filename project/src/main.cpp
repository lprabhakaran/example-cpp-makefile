#include <iostream>

using namespace std;

int main(const int argc, const char** argv) {
  
  char buffer[8];
    std::cout << "Enter your name: ";
    std::cin >> buffer;  // No bounds checking!
    std::cout << "Hello, " << buffer << std::endl;

  return 0;
}
