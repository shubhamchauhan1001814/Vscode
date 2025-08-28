#include <iostream>
using namespace std;
int main() {
    int a =5;
    int *ptr =&a;
    cout << a << endl;
    cout << &a << endl;
   // cout << *a << endl; // error becouse a is not pointer
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
    ptr=ptr+1;
    cout << *ptr << endl; // the value in this is a address therefore it will not add +1 it will add +sizeof_address
  
    *ptr = *ptr/2;
    cout << *ptr << endl;


  
    *ptr=*ptr+1;
    cout << *ptr << endl;
 

    // *ptr = *ptr / 2; // Dereference ptr to modify the value of a
    // cout << *ptr << endl; // Output the modified value of a using ptr
    // cout << a << endl;    // Output the modified value of a directly

    // *ptr = *ptr + 1; // Dereference ptr again to modify the value of a
    // cout << *ptr << endl; // Output the new modified value of a using ptr
    // cout << a << endl;    // Output the new modified value of a directly
    return 0;
}