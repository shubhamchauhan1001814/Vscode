#include <iostream>
using namespace std;
int main() {
    int hour, min;
    cout << " Enter the Hour  : ";
    cin >> hour;

    cout << " Enter the Minute: ";
    cin >> min;
    if (min==0){
        hour=22-hour;
        cout << "Remeaning time is " << hour << " hour and 0 min" << endl;  
    }
    else {
        hour =21-hour;
        min = 60-min;
        cout << "Remeaning time is " << hour << " hour and " << min << " min "  << endl;
    }

    

    

    return 0;
}