#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

// Function to check if the number is valid for the given base
bool isValidNumber(string number, int base) {
    for (char digit : number) {
        if (digit >= '0' && digit <= '9') {
            if (digit - '0' >= base) return false;
        } else if (digit >= 'A' && digit <= 'Z') {
            if (digit - 'A' + 10 >= base) return false;
        } else if (digit == '.') {
            continue;
        } else {
            return false;
        }
    }
    return true;
}

// Function to convert a number from any base to decimal
double toDecimal(string number, int base) {
    double decimal = 0;
    int length = number.length();
    int pointPos = number.find('.');

    if (pointPos == string::npos) pointPos = length;

    for (int i = 0; i < pointPos; i++) {
        char digit = number[pointPos - i - 1];
        if (digit >= '0' && digit <= '9') {
            decimal += (digit - '0') * pow(base, i);
        } else if (digit >= 'A' && digit <= 'Z') {
            decimal += (digit - 'A' + 10) * pow(base, i);
        }
    }

    for (int i = pointPos + 1; i < length; i++) {
        char digit = number[i];
        if (digit >= '0' && digit <= '9') {
            decimal += (digit - '0') * pow(base, pointPos - i);
        } else if (digit >= 'A' && digit <= 'Z') {
            decimal += (digit - 'A' + 10) * pow(base, pointPos - i);
        }
    }

    return decimal;
}

// Function to convert a decimal number to any base
string fromDecimal(double decimal, int base) {
    string result = "";
    int integerPart = static_cast<int>(decimal);
    double fractionalPart = decimal - integerPart;

    while (integerPart > 0) {
        int remainder = integerPart % base;
        if (remainder < 10) {
            result += (remainder + '0');
        } else {
            result += (remainder - 10 + 'A');
        }
        integerPart /= base;
    }

    reverse(result.begin(), result.end());

    if (fractionalPart > 0) {
        result += '.';
        int count = 0;
        while (fractionalPart > 0 && count < 10) { // Limit to 10 decimal places
            fractionalPart *= base;
            int digit = static_cast<int>(fractionalPart);
            if (digit < 10) {
                result += (digit + '0');
            } else {
                result += (digit - 10 + 'A');
            }
            fractionalPart -= digit;
            count++;
        }
    }

    return result;
}

// Function to handle the conversion process
void convertBase() {
    string number;
    int fromBase, toBase;

    while (true) {
        cout << "Enter the number (or 0 to terminate): ";
        cin >> number;
        if (number == "0") break;

        cout << "Enter the base of the number: ";
        cin >> fromBase;
        cout << "Enter the base to convert to: ";
        cin >> toBase;

        if (!isValidNumber(number, fromBase)) {
            cout << "Invalid number for the given base!" << endl;
            continue;
        }

        double decimal = toDecimal(number, fromBase);
        string result = fromDecimal(decimal, toBase);

        cout << "The number " << number << " in base " << fromBase << " is " << result << " in base " << toBase << endl;
    }
}

int main() {
    convertBase();
    return 0;
}
