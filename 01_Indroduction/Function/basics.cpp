#include<iostream>
using namespace std;

void printCounting() {
    for(int i=1; i<=5; i+=1){
    cout << i << " " ;
}

}






int sum(int a, int b) {
    int totalsum = a+b;
    return totalsum;
    }









void printmyname(){
    cout << "shubham ";
}






int main()
{

cout << "Hi " << endl;
printCounting();

int ans = sum(5,10);
cout << endl;

printmyname();
cout << ans << endl;
    return 0;
}



