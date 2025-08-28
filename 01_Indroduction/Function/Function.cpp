#include<iostream>
using namespace std;

int getmultiply(int x, int y, int z);

void printnametentime();


void printmultiple(int num){
    for(int i=1;i>10;i=i+1){
        cout << num*i << endl;
    }
}




int convertIntofaranite(int far){
    int calcius=(far-32)*5/9;
    cout << calcius << endl;
}

char convertInotUpperCase(char ch){
    char answer = ch -'a' +'A';
    return answer;
}



int main(){
    int ans=getmultiply(5,6,7);
    cout << ans << endl;
    printnametentime();
    int M=5;
    printmultiple(M);
    int far =32;
    int conversionans= convertInotUpperCase(far);
    cout << conversionans << endl;

    char result =convertInotUpperCase('b');
    cout << result << endl;
    

    return 0;

    
}





int getmultiply(int x ,int y, int z){
    int result = x*y*z;
    return result;
    
}

void printnametentime(){
    for(int i=1;i<=10;i+=1){
        cout << "shubham  " ;
    }
}