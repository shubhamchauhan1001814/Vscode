#include <iostream>
using namespace std;
int main() {
    char ch[10]="RacecaR";
    char *cptr = ch;
    cout << "ch       " << ch << endl;
    cout << "&ch      " << &ch << endl;
    cout << "&ch[0]   " << &ch[0] << endl;
    cout << "&ch[3]   " << &ch[3] << endl;
    cout << "*(ch+3)  " << *(ch+3) << endl;
    cout << "cptr     " << cptr << endl;
    cout << "&cptr    " << &cptr << endl;
    cout << "cptr +2  " << cptr+2 << endl;
    cout << "*(cptr+3)" << *(cptr+3) << endl;
    cout << "*cptr    " << *cptr << endl;
    cout << "cptr+4   " << cptr+4 << endl;

    

    return 0;
}
