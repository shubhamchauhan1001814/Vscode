#include <iostream>
using namespace std;
int main() {
    int n=10;
for(int i=1; i<n; i++){
    for(int j=i; j>0;j--){
      
      if(j==i || j==1 || i==n-1){
        cout <<  i  ;
      }

      else {
        cout << " ";
      }
    }
    cout << endl;
}
    return 0;
}