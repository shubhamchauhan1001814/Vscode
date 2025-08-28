#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter any number: ";
  cin >> n;
  cout << endl;
  int i=1;
  int row=2*n-1;
while(row){

if(i>n){
    for(int j=1;j<=2*n-i;j++)
    {
        cout << "* ";
    }
}
else{
    for(int j=1;j<=i;j++){
    cout << "* ";
    }
}

    cout << endl;  
    row--;
    i++;
}

    return 0;
}