#include <iostream>
#include <bitset>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

// Function to convert a character to its integer value (supports 0-9, A-F)
int charToValue(char c) {
    if (c >= '0' && c <= '9')
        return c - '0';
    else if (c >= 'A' && c <= 'F')
        return c - 'A' + 10;
    else if (c >= 'a' && c <= 'f')
        return c - 'a' + 10;
    return -1;
}

// Function to convert a string in base N to a decimal float
float convertToDecimal(const string &input, int base) {
    stringstream ss(input);
    string intPart, fracPart;
    getline(ss, intPart, '.'); // Split the string at the decimal point
    if (ss.eof()) {
        fracPart = "";
    } else {
        getline(ss, fracPart);
    }

    // Convert integer part
    float result = 0;
    int power = 0;
    for (char c : intPart) {
        int value = charToValue(c);
        if (value < 0 || value >= base) {
            cerr << "Invalid character for base " << base << ": " << c << endl;
            exit(1);
        }
        result = result * base + value;
    }

    // Convert fractional part
    if (!fracPart.empty()) {
        float fracResult = 0;
        float divisor = base;
        for (char c : fracPart) {
            int value = charToValue(c);
            if (value < 0 || value >= base) {
                cerr << "Invalid character for base " << base << ": " << c << endl;
                exit(1);
            }
            fracResult += value / divisor;
            divisor *= base;
        }
        result += fracResult;
    }

    return result;
}

// Function to print a 32-bit unsigned integer in any base
string toBase(uint32_t num, int base) {
    if (base < 2 || base > 16) {
        return "Invalid base";
    }

    string digits = "0123456789ABCDEF";
    string result = "";

    do {
        result = digits[num % base] + result;
        num /= base;
    } while (num > 0);

    return result;
}

// Function to display a 32-bit float in binary
void displayBinary(float num) {
    uint32_t bits = *reinterpret_cast<uint32_t *>(&num);
    cout << bitset<32>(bits) << endl;
}

int main() {
    string input;
    int inputBase, outputBase;

    // Input section
    cout << "Enter the floating-point number in any base: ";
    cin >> input;
    cout << "Enter the base of the input number (e.g., 3, 7, 8, 12, 16): ";
    cin >> inputBase;
    cout << "Enter the base for output (e.g., 3, 7, 8, 12, 16): ";
    cin >> outputBase;

    // Convert input to decimal float
    float number = convertToDecimal(input, inputBase);
    cout << "\nThe decimal representation is: " << number << endl;

    // Get the binary representation of the float
    uint32_t bits = *reinterpret_cast<uint32_t *>(&number);

    cout << "\nOriginal number in binary: ";
    displayBinary(number);

    // 1's Complement
    uint32_t onesComplement = ~bits;
    cout << "\n1's Complement in binary: " << bitset<32>(onesComplement) << endl;
    cout << "1's Complement in base " << outputBase << ": " << toBase(onesComplement, outputBase) << endl;

    // 2's Complement
    uint32_t twosComplement = ~bits + 1;
    cout << "\n2's Complement in binary: " << bitset<32>(twosComplement) << endl;
    cout << "2's Complement in base " << outputBase << ": " << toBase(twosComplement, outputBase) << endl;
    
    return 0;
}

