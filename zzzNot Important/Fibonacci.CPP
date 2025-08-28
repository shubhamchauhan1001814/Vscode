#include <iostream>
using namespace std;
int fibb_recursion(int i){
   if(i==1){
    return 0;
   }
   else if (i==2){
    return 1;
   }
   else 
   return fibb_recursion(i-1)+fibb_recursion(i-2);
}

int main() {
    cout << "Enter the number" << endl;
    int n,r,choice;
    cin >> n;
    cout << "How you like to solve" << endl;
    cout << "1.Recursion" << endl << "2.Iterative" << endl;
    cin >> choice;
    if(choice == 1){
    for (int i=1 ;i<=n;i++)
    {
        r = fibb_recursion(i);
        cout << r << " ";
    }}
    else{
        int a=1,b=0,c=0;
        for (int i=1;i<=n;i++){
            cout << c << " ";
            c=a+b;
            a=b;
            b=c;
        }
    }
    return 0;
}