#include<iostream>
using namespace std;
int main(){
    char grade;
    cout << "Enter Your Grade:" << endl;
    cin >> grade;
    cout << "your makrs will be in range of " << endl;

    // if(grade == 'A'){
    //     cout << "90 to 100";
    // }
    // else if(grade == 'B')
    //     cout << "80-90";
    // else if(grade == 'C')
    //     cout << "70-80";
    // else if(grade == 'D')
    //     cout << "60-70";
    // else if(grade == 'E')
    //     cout << "50-60";
    // else if(grade == 'D')
    //     cout << "YOU FAILDE";



    // insted of if else we can use swithc case 



    // switch(grade){
    //     case 'A': cout << "90 to 100";
    //     break;
    //     case 'B': cout << "80 to 90";
    //     break;
    //     case 'C': cout << "70 to 80";
    //     break;
    //     case 'D': cout << "60 to 70";
    //     break;
    //     case 'E': cout << "50 to 60";
    //     break;
    //     case 'F': cout << "Your fail";
    //     break;
    //     default: cout << "invalid input";
    //     break;
    // }







int age =42;
switch(age>10){
    case 1 : cout << "Not";
    break;
    case 0 : cout << " OK";
    break;

}
    
    return 0;

    }