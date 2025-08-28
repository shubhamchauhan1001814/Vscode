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
int m=n;
int p=n;
int fill=(2*i)-1;

while (m-1){
    cout << "*";
m--;
}


    while (gap1)
    {
    cout << "*"; 
    gap1--;
    }
j=1;
int k=i;

        int invert=0;
    while (k){

        if(j<i && invert==0){
            cout << i << "*";
            j++;
          
        }
        else{
            cout << i << "*";
            j--;
            invert=1;
        }
        fill--;
        k--;
    }

    while(gap2)
    {
    cout << "*"; 
    gap2--;
    }


    while (p-1){
    cout << "*";
p--;
}
cout << endl;
i++;
}
    return 0;
}