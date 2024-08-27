
#include <iostream>
#include <string>
#include <bitset>
#include <bits/stdc++.h>

bool hasEvenNumberOfBits(int n) {
    int count = 0;

    while (n) {
        count += n & 1; 
        n >>= 1;        
    }

    return !(count & 1); 
}
 
int main()
{
    unsigned int decimal = 860;
    const int n = 10;
 
    std::string binary = std::bitset<n>(decimal).to_string();

    std::cout << decimal << " = " << binary << std::endl;

    std::cout << "Il y a " <<__builtin_popcount(decimal) << " bits a 1 "<< std::endl;


    if (hasEvenNumberOfBits(decimal)) {
        std::cout << "VRAI" << std::endl;
    } else {
        std::cout << "FAUX" << std::endl;
    }
 
    return 0;
}