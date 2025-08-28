#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

int main() {
    cout << "Enter the Radius :";
    double radius, area;
    cin >> radius;
    area = radius * radius * M_PI;
    cout << endl;
    cout << "The area of triangle of " << radius << " is " << area ;
    return 0;
}