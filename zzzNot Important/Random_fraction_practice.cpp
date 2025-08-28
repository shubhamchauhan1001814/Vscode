#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h> // for getch()
using namespace std;
 // namespace std;

int main() {
    double arr[100];
    static int n = 0;

    for (double i = 1; i < 11; i = i + 1) {
        for (double j = 1; j < 11; j = j + 1) {
            double ans = i / j;
            bool isUnique = true;

            for (int k = 0; k < n; k++) {
                if (arr[k] == ans) {
                    isUnique = false;
                    break;
                }
            }

            if (isUnique) {
                arr[n] = ans;
                n++;
                cout << i << "/" << j << "= " << ans << "    ";
            }
        }
        cout << endl;
        cout << endl;
    }

    cout << "Unique values stored in array: ";
    for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;

    cout << "Number of unique answers: " << n << endl;

    int x=0,y=62;

    char choice;

    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
int w=1;
    do {
        

        // Generate a random number between x and y
        int random_number = x + rand() % (y - x + 1);
        cout << "                                                         "<< arr[random_number]  << endl;
        cout << w << endl;
        w++;

        std::cout << "'0' to generate number, '1' to exit: ";
        choice = _getch();
        std::cout << choice << std::endl;
    } while (choice != '1');

    std::cout << "Exiting the loop. Goodbye!\n";
    return 0;
}

