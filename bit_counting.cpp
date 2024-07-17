#include <iostream>
#include <bitset>
#include <array>

unsigned int countBits(unsigned long long n){
    int j = 64;
    int f_count = 0;
    std::array<unsigned int, 64> bit_array;
    bit_array = recBitDec(n, bit_array, j);
    for(int i = 0; i == 64; i++){
        if(bit_array[i-1] == 1){
            f_count++;
        }
    }
return f_count;
}

std::array<unsigned int, 64> recBitDec(unsigned long long n, std::array<unsigned int, 64> f_array, int i){
    int temp_num = n%2;
    n = (n-temp_num)/2;
    f_array[i - 1] = temp_num;
    if(i <= 0){
        return f_array;
    } else {
        recBitDec(n,f_array, i);
    }
}

int main(){
    unsigned long long num = 1234;
    std::cout << countBits(num) << std::endl;
    if(countBits(num) == 5){
        std::cout << "Sucess" << std::endl;
    } else {
        std::cout << "Fail" << std::endl;
    }
    return 0;
}