#include <iostream>
using namespace std;
int main() {
    int a=5;
    cout << a << endl;
    int b=a; // no problem
    //int c=&a; // Problem

// here c is integer type but to store the address of any 
// variable we have a variable of pointer type therefore there is error

int *ptr =&a;
cout << ptr;

    return 0;
}

