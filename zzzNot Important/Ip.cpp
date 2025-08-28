#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h> // for getch()
using namespace std;
 // namespace std;


int main() {
    int x=0,y=8;
    char choice;
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    do {
                // Generate a random number between x and y
        int random_number = x + rand() % (y - x + 1);
        std::cout << "How Many number of 1 present in binary representaion of " << "is                            ";
        switch (random_number)
        {
        case 0:
            std::cout << "0" <<endl;
            break;
        case 1:
            std::cout << "128"<<endl;
            break;
        case 2:
            std::cout << "192"<<endl;
            break;
        case 3:
            std::cout << "224"<<endl;
            break;
        case 4:
            std::cout << "240"<<endl;
            break;
        case 5:
            std::cout << "248"<<endl;
            break;
        case 6:
            std::cout << "252"<<endl;
            break;
        case 7:
            std::cout << "254"<<endl;
            break;
        case 8:
            std::cout << "255"<<endl;
            break;
        default:
            break;
        }
    
        std::cout << "'0' to generate number, '1' to exit: ";
        choice = _getch();
        std::cout << choice << std::endl;

    } while (choice != '1');
    std::cout << "Exiting the loop. Goodbye!\n";
    return 0;
}
