// this operator work as if else condition


#include<iostream>
using namespace std;
int main(){
    int age;
        int hight;
    cout << "Enter your age" << endl;
    cin >> age;
    cout << "Enter your hight" << endl;
    cin >> hight;

    (hight>5)?(age >18 ) ? cout << "can vote" : cout << "cannot vote": cout << "go home";
    
    return 0;
}