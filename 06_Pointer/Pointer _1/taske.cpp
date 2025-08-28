#include <iostream>
using namespace std;
int main() {
    
    int a=5;
    char b='t';
    long l=123234;
    int *ptr=&a;
    char *ptr2=&b;
    long *ptr3=&l;
    cout << sizeof(ptr);
cout << sizeof(ptr2);
cout << sizeof(ptr3);
    

    return 0;
}