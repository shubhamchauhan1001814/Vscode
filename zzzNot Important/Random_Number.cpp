#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h> // for getch()
using namespace std;
 // namespace std;


int main() {
    int x,y;
    cout << "Low Number: ";
    cin >> x;
    cout << endl;
    cout << "High Number: ";
    cin >> y;
    cout << endl;
    char choice;

    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    do {
        // Generate a random number between x and y
        int random_number = x + rand() % (y - x + 1);
        std::cout << "Random number between " << x << " and " << y << ":                          " << random_number << "\n";

        std::cout << "'0' to generate number, '1' to exit: ";
        choice = _getch();
        std::cout << choice << std::endl;
    } while (choice != '1');

    std::cout << "Exiting the loop. Goodbye!\n";
    return 0;
}
