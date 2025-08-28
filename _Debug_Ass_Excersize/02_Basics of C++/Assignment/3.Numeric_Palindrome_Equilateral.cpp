#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter any number: ";
  cin >> n;
  cout << endl;
  int i=1, j=1;
while (i<=n){
int gap=n-i;
int gap1=gap;
int gap2=gap;
int j=1;
int fill=(2*i)-1;
    while (gap1)
    {
    cout << "  "; 
    gap1--;
    }
j=1;

        int invert=0;
    while (fill){

        if(j<i && invert==0){
            cout << j << " ";
            j++;
          
        }
        else{
            cout << j << " ";
            j--;
            invert=1;
        }
        fill--;
    }

    while(gap2)
    {
    cout << "  "; 
    gap2--;
    }

cout << endl;
i++;
}
    return 0;
}