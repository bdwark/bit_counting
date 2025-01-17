/*
#include <iostream>
#include <vector>

std::vector<int> recBitDec(unsigned long long n, int i) {
    if (i == 0) {
        std::vector<int> f_vec;
        f_vec.push_back(n);
        return f_vec;
    }
    else {
        i--;
        std::vector<int> f_vec;
        int temp_num = n % 2;
        n = (n - temp_num) / 2;
        f_vec = recBitDec(n, i);
        f_vec.push_back(temp_num);
        return f_vec;
    }
}

unsigned int countBits(unsigned long long n) {
    int j = 64;
    int f_count = 0;
    std::vector<int> bit_vec;
    bit_vec = recBitDec(n, j);
    for(int i = 0; i < 65; i++) {
        if (bit_vec[i] == 1) {
            f_count++;
        }
    }
    return f_count;
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
*/