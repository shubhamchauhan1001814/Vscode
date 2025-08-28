#include <iostream>
#include <iomanip>
using namespace std;

void printIterationStep(int j, int i, int product) {
    if (product / 10 == 0) {
        cout << "    " << product;
    } else if (product / 100 == 0) {
        cout << "   " << product;
    } else if (product / 1000 == 0) {
        cout << "  " << product;
    } else {
        cout << " " << product;
    }
}

int main() {
    int option;

    cout << "Choose an option:\n";
    cout << "0. Terminate\n";
    cout << "1. Show iterations step by step\n";
    cout << "2. Show final multiplication table\n";
    cout << "3. Back to Main Menu\n";
    cin >> option;

    while (option != 0) {
        if (option == 1) {
            // Loop through multipliers 1 to 20
            for (int j = 1; j <= 20; ++j) {
                // Loop through numbers 1 to 20
                for (int i = 1; i <= 20; ++i) {
                    int product = i * j;
                    printIterationStep(j, i, product);

                    // Pause for each inner loop iteration
                    cout << j << " * " << i << " = " << product;
                    cout << "Press Enter to continue...";
                    cin.ignore();
                    cin.get();
                }
                cout << endl; // New line after each row
            }
        } else if (option == 2) {
            // Loop through multipliers 1 to 20
            for (int j = 1; j <= 20; ++j) {
                // Loop through numbers 1 to 20
                for (int i = 1; i <= 20; ++i) {
                    int product = i * j;
                    printIterationStep(j, i, product);
                }
                cout << endl; // New line after each row
            }
        } else if (option == 3) {
            cout << "Returning to main menu...\n";
        } else {
            cout << "Invalid option, please try again.\n";
        }

        cout << "\nChoose an option:\n";
        cout << "0. Terminate\n";
        cout << "1. Show iterations step by step\n";
        cout << "2. Show final multiplication table\n";
        cout << "3. Back to Main Menu\n";
        cin >> option;
    }

    cout << "Terminating the program.\n";
    return 0;
}
