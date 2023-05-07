// using bitset libary function
// #include <iostream>
// #include <bitset>
// int main() {
//     int decimal_number;
//     std::cin>>decimal_number;
    
//     std::bitset<8> ones_complement(decimal_number);
//     ones_complement = ~ones_complement;

//     std::cout << "Decimal Number: " << decimal_number << std::endl;
//     std::cout << "1's Complement: " << ones_complement << std::endl;
    
//     return 0;
// }



// mathmatical logic
#include <iostream>

int main() {
    int decimal_number = 10;
    int bits_count = 8;
    int ones_complement = 0;

    // calculate the 1's complement of the binary number
    for (int i = 0; i < bits_count; i++) {
        int bit = (decimal_number >> i) & 1;
        ones_complement |= ((bit ^ 1) << i);
    }

    std::cout << "Decimal Number: " << decimal_number << std::endl;
    std::cout << "1's Complement: " << ones_complement << std::endl;
    
    return 0;
}


