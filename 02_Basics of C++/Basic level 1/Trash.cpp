#include<iostream>
//      Positon =1,2,3, 4, 5, 6, 7, 8, 9,10
    int arr[10]={3,5,7,23,54,65,74,75,83,98};
using namespace std;
 int recursion(int n){
    
        for(int i=1;i<=10;i++){
        if(arr[i-1]==n){
            return i;
            break;
        }
        else{
           
        }
    }cout << endl << "Element not found" << endl;
}


int binary(int n){
    int mid, high=9, low=0;
    for(int i=1;low<=high;i+=1){
        
        mid=(high+low)/2;
        if(arr[mid] == n){
            return mid+1;
            cout << i << " Step: A"  << endl;
            break;
            

        }
        else if(arr[mid] > n){
            high = mid-1;
            cout << i << " Step: B "  << endl;
        }
        else{
            low=mid+1; 
            cout << i << " Step: C"  << endl;
        }
   
    }
    cout << "Element not found" << endl;
    return -1;
 }



int main(){
    int INPUT, OUTPUT;
    cin >> INPUT;
    OUTPUT =recursion(INPUT);
    
    OUTPUT =binary(INPUT);
    cout << OUTPUT << endl;
    return 0;
}