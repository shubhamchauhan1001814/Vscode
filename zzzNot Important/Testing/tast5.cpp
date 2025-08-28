#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

void decimalToBinary(int num) {
    vector<int> binary;

    if (num == 0) {
        cout << "Binary: 0\n";
        return;
    }

    while (num > 0) {
        binary.push_back(num % 2);
        num /= 2;
    }

    cout << "Binary: ";
    for (int i = binary.size() - 1; i >= 0; --i) {
        cout << binary[i];
    }
    cout << endl;
}

void doubleToBinary(double num) {
    union {
        double input;
        uint64_t bits;
    } data;

    data.input = num;

    bitset<64> binary(data.bits);

    cout << "Binary (IEEE 754): " << binary << endl;

    uint64_t sign = (data.bits >> 63) & 1;
    uint64_t exponent = (data.bits >> 52) & 0x7FF;
    uint64_t mantissa = data.bits & 0xFFFFFFFFFFFFF;

    cout << "Sign: " << sign << "\n";
    cout << "Exponent: " << bitset<11>(exponent) << " (" << exponent << ")\n";
    cout << "Mantissa: " << bitset<52>(mantissa) << " (" << mantissa << ")\n";
}

int main() {
    int option;

    while (true) {
        cout << "\nChoose an option:\n";
        cout << "0. Terminate\n";
        cout << "1. Convert decimal to binary\n";
        cout << "2. Convert double to binary (IEEE 754)\n";
        cout << "3. Back to Main Menu\n";
        cin >> option;

        if (option == 0) {
            cout << "Terminating the program.\n";
            break;
        } else if (option == 1) {
            int num;
            cout << "Enter a decimal number: ";
            cin >> num;
            decimalToBinary(num);
        } else if (option == 2) {
            double num;
            cout << "Enter a double number: ";
            cin >> num;
            doubleToBinary(num);
        } else if (option == 3) {
            continue; // Go back to the main menu
        } else {
            cout << "Invalid option, please try again.\n";
        }
    }

    return 0;
}
