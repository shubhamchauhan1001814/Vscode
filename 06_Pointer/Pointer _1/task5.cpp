#include <iostream>
using namespace std;
int main() {
    int a =5;
    int *p =&a;
    int *q = p;
    cout << "a:  " << a << endl;
    cout << "&a:  " << &a << endl;
  //  cout << "*a:  " << *a << endl; // a is not pointer it is variable here it is shown that there is no such pointer which name as a;
    cout << "p:  " << p << endl; // P IS NOT THE VARABLE IT IS POINTER THEREFORE IT IS AN ERROR
    cout << "&p:  " << &p << endl;
    cout << "*p:  " << *p << endl;
    cout << "q:  " << q << endl;
    cout << "&q:  " << &q << endl;
    cout << "*q:  " << *q << endl;
    

    return 0;
}