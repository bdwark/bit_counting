#include <iostream>
#include <bitset>

unsigned int countBits(unsigned long long n){
  int count = 0;
  while (n) {
    n &= (n-1);
    ++count;
  }
  return count;
}

int main() {
    unsigned long long num = 7;
    std::cout << countBits(num) << std::endl;
    if (countBits(num) == 3) {
        std::cout << "Sucess" << std::endl;
    }
    else {
        std::cout << "Fail" << std::endl;
    }
    return 0;
}