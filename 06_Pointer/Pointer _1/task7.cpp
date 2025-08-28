#include <iostream>
using namespace std;
int main() {
    char ch[100]="lovebabber";
    char *cptr = ch;
    cout << ch << endl;
    cout << &ch << endl;
    cout << ch[0] << endl;
    cout << &cptr << endl;
    cout << *cptr << endl;
    cout << *(cptr+3) << endl;
    cout << cptr << endl;  // HERE all string is printed from the adrees it store; 
    cout << cptr+3 << endl;
    

    

    return 0;
}