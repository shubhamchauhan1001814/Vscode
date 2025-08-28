#include <iostream>
using namespace std;
#include <cstring>


void printnumofchar(char arr[],int n){
    for(int i=0;i< n; i++){
    cout << arr[i] << " -->" << (int)arr[i] << endl;
}
}



int getlength(char arr[], int ){
    int count =0;
int index =0;
while(arr[index]!='\0'){
      if(arr[index]=='@')
        arr[index]=' ';
    count++;
    index++;
}
return count;
}




void convrerintouppercase(char arr[], int n)
{
     for(int i=0;i<n;i++){
        char ch=arr[i];
        ch =ch-'a'+'A';
        arr[i] =ch; 
     }
}



void updowncase(char arr[], int n){
    
    for(int i=0;i<n;i++){
        char ch = arr[i];
       if(ch >='A' && ch<='Z'){
        arr[i] = ch -'A' +'a';
       }
       else if(ch >='a' && ch<='z'){
        arr[i] = ch - 'a'+ 'A';
       }
       else{

        arr[i]= '_';
       }
     }
     cout << arr << endl;
}



void reverse_array(char arr[],int n){
int start =0, end=n-1;
    while(start< end){
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end]=temp;
        start ++;
        end--;
}
}



bool ispalindrome(char arr[], int n){
    int start =0, end=n-1;
    while(start< end){
        if (arr[start]!=arr[end])
        {
            return false;
        }
        start++;
        end--;
}
return true;
}




int main() {

int n=100;
char arr[n];
cout << "Enter the string : " ;


// THIS IS DELEMETER cin.getline(Array_name,length_of_array,Where_to_Stop)
// \t --> Tab
// \n --> Enter
// \_ --> Space
// Any cherector you can use
cin.getline(arr,n,'\n');
int len=strlen(arr);


// // Getting the length of String 
// cout << getlength(arr, n) << endl;



// // Print the ascii value
// printnumofchar(arr,getlength(arr,n));



// // convert the upper case letter to lowercase and lower case letter to upper case
// updowncase(arr,getlength(arr,100));




// // Reverst the string

// reverse_array(arr, len);
// cout << arr << endl;




// // cheaking the word is palindrom or not
// cout << endl <<  ispalindrome(arr, len)<< endl;




// // cancatination 
// char arr1[100];
// cout << "Enter the array 1: " ;
// cin >> arr1;
// char arr2[100];
// cout << "Enter the array 2: " ;
// cin >> arr2;
// cout<< strcat(arr1,arr2) << endl;



return 0;
}