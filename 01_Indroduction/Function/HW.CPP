#include<iostream>
using namespace std;

void OTOH();
int simpleinterest1(int Pricipal, int Rate, int Time);
void Primnumber();
void voting(int age);


int main()
{

// Q1 WRITE A FUNCTION TO PRINT COUNTING FORM 1 TO 100
// OTOH();
// cout << endl;

// Q2 WRITE A FUNCTION TO FIND SIMPLE INTEREST
// int Pricipal, Rate, Time;
// cout << "Pricipal Amount: ";
// cin >> Pricipal;
// cout << "Rate in Precent: ";
// cin >> Rate;
// cout << "Time in Year: " ;
// cin >> Time;
// int Simple= simpleinterest1(Pricipal, Rate, Time);
// cout << "The Simple Interest is: " << Simple << endl;

// // Q3 WRITE A FUNCTION TO PRINT PRIME NUMBERS FROM 1 TO 100
// Primnumber();

// Q4 WRITE A FUCTION CHEAK WHETHER SOMEONE IS ELIGIBLE FOR vOTING OR not
// int age ;
// cout << "AGE: " ;
// cin >> age ;
// voting(age);

// Q5 WRITE A SIP COACULATOR USING FUNCTION CONCEPT
    return 0;
}

void OTOH(){
    for(int i=1;i<=100;i++){
        cout << i << " ";
    }
    
}

int simpleinterest1(int Principal, int Rate, int Time){
    return (Principal * Rate * Time)/100;
    
}

void Primnumber(){
    for(int i=1;i<=100;i+=1){
        if(i%2 == 0 && i!=2);
        else if(i%3 == 0 && i!=3);
        else if(i%5 == 0 && i!=5);
        else if(i%7 == 0 && i!=7);
        else{
            cout << i << " ";
        }

    }
}

void voting(int age){

if(age>18){
    cout << " Your are eligable for voting";

}else {
    cout << "your are not eligible for voting";
}
}


