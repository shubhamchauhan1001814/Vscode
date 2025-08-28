#include<iostream>
using namespace std;
int main(){

    // implicit Typecasting


 // here compiler automatically convert the values as the result type;
 // inter to float and float to integer
    // int num1 = 23;
    // float num2 = 343.33;
    // float result1 = num1 + num2;
    // int result2= num1 + num2;
    // cout << result1 << endl << result2;

// charter to integer
// integet to char and char to integet
// char ch ='A';// ASCII value of A is 65
// int a = 5;
// int result3 = ch + a;
// char result4 = ch + a;
// cout << result3 << endl<< result4;



// explict character

// int num3 =10;
// float num4 =23.234;

// float result5 = num3 + (int)num4;
// cout << result5 << endl;

// double pi = 3.14159265;
// int intPi = (int)pi;
// cout << intPi << endl;


// float floatingNumber = 65.35;
// char charValue =(char)floatingNumber;
// cout << charValue << endl;


int int6=3;
int int7=10;
float F1= int7/int6;
// Tow way to do it
float F2= int7/(float)int6;
float F3= (float)int7/int6;

// now in this case bothe type conversion in below __LINE
// explicit and implicit
int F4 =int7/(float)int6;
cout << F1 << endl <<F2 << endl << F3 << endl << F4;












    return 0;
}