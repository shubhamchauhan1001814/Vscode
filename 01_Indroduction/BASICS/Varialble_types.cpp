#include<iostream>
using namespace std;
int main(){
    int count = 5;
    float share = 3.14;
    char alphabet = 'A';
    double weight = 55.69887;
    bool isMale = true;
    
    // cout << count << endl;
    
    // cout << share << endl;
    
    // cout << alphabet<< endl;
    
    // cout << weight << endl;
    
    // cout << isMale << endl;

    int age = 12;
    double  app = 322323;

    cout << sizeof(age) << endl;
    cout << sizeof(app) << endl;
    return 0;
    {
        double weight = 55.69887; 
        {
            double weight = 78.69887;
            {
              double weight = 69.69887;
            }
        }
    }

    // here you can clearly see i am redefining the the variale again and again . How?

}


// now you can see the output of the double 
// 55.69887 should come but the value is 55.6989 is comming. give reason Why.
// how data is can be stored inside memory for also for -ve and +ve 
// decimal to binary conversioin and vice versa
// 