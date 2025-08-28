#include <iostream>
#include <bitset>
#include <iomanip>
#include <sstream>
#include <cmath>

void printFloatInIEEE(float num) {
    union {
        float input;
        uint32_t bits;
    } data;

    data.input = num;

    uint32_t sign = (data.bits >> 31) & 1;
    uint32_t exponent = (data.bits >> 23) & 0xFF;
    uint32_t mantissa = data.bits & 0x7FFFFF;

    std::cout << "Sign: " << sign << "\n";
    std::cout << "Exponent: " << std::bitset<8>(exponent) << " (" << exponent << ")\n";
    std::cout << "Mantissa: " << std::bitset<23>(mantissa) << " (" << mantissa << ")\n";

    std::cout << "IEEE 754 format (binary): " << sign << " " 
              << std::bitset<8>(exponent) << " " << std::bitset<23>(mantissa) << "\n";
    
    std::cout << std::hex << std::uppercase;
    std::cout << "IEEE 754 format (hexadecimal): 0x" << data.bits << "\n";
    std::cout << std::dec;
}

float hexToFloat(const std::string& hexStr) {
    uint32_t bits;
    std::stringstream ss;
    ss << std::hex << hexStr;
    ss >> bits;

    union {
        uint32_t bits;
        float value;
    } data;

    data.bits = bits;
    return data.value;
}

int main() {
    while (true) {
        int option;
        std::cout << "\nChoose an option:\n";
        std::cout << "0. Terminate\n";
        std::cout << "1. Print float in IEEE 754 format\n";
        std::cout << "2. Convert IEEE 754 hex to float\n";
        std::cin >> option;

        if (option == 0) {
            std::cout << "Terminating the program.\n";
            break;
        } else if (option == 1) {
            float num;
            std::cout << "Enter a float number: ";
            std::cin >> num;
            printFloatInIEEE(num);
        } else if (option == 2) {
            std::string hexStr;
            std::cout << "Enter IEEE 754 hex value: 0x";
            std::cin >> hexStr;
            float result = hexToFloat(hexStr);
            std::cout << "The decimal value is: " << result << "\n";
        } 
        else {
            std::cout << "Invalid option, please try again.\n";
        }
    }

    return 0;
}
