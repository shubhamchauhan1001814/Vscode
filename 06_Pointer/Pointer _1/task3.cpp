#include <iostream>
using namespace std;
int main() {
    int a=73;
   // int *ptr;
   // cout << *ptr; // problem
    // this is never a good practice
    // segmentation fault;
    int * ptr=0;
    cout << *ptr;
    cout << a;
    return 0;
}