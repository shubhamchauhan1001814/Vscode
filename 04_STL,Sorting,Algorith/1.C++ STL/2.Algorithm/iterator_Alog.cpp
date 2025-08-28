#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
void printDouble(int a){
    cout << 2*a <<" ";
}

bool cheakEven(int a){
    return a%2 == 0;
}
int main() {
     

    vector<int> arr(5);
    arr[0]=43;
    arr[1]=50;
    arr[2]=22;
    arr[3]=58;
    arr[4]=22;

    
// for_each(start, end, function )
    for_each(arr.begin(), arr.end(),printDouble);
    
    // find
    // find(start, end, target);
    int target =58;
    cout << endl;
// if the value is not present then it will return the garbage value
    // This will return you the iteator
    vector<int>:: iterator it = find(arr.begin(),arr.end(),target);
    cout << *it << " " << endl;
// or
  auto it2 = find(arr.begin(),arr.end(),41);
 cout << *it2 << " " << endl;



 // find_if(start , end, function)
 find_if(arr.begin(), arr.end(), cheakEven );
// it will give you first maching condition result

auto it_3=find_if(arr.begin(), arr.end(), cheakEven );
cout << *it_3 << " " << endl;




// cout 
count(arr.begin(), arr.end(), target);

int ans=count(arr.begin(), arr.end(), target);
cout << ans << endl;



// cout_if

count_if(arr.begin(), arr.end(), cheakEven);
 ans=count_if(arr.begin(), arr.end(), cheakEven);
cout << ans << endl;




// short
sort(arr.begin(), arr.end());
for (int a: arr){
    cout  << a << " ";
}
cout << endl;




// reverse
reverse(arr.begin(),arr.end());
for (int a: arr){
    cout  << a << " ";
}
cout << endl;



// rotate
rotate(arr.begin(), arr.begin()+3, arr.end());
cout <<"After:" << endl;
for (int a: arr){
    cout  << a << " ";
}
cout << endl;




// Unique
// remove the duplicate element
unique(arr.begin(), arr.end());
auto it_4=unique(arr.begin(), arr.end());
arr.erase(it_4, arr.end());
for (int a: arr){
    cout  << a << " ";
}
cout << endl;




// Partition
partition(arr.begin(), arr.end(),cheakEven);
auto it_5 =partition(arr.begin(), arr.end(),cheakEven);
for (int a: arr){
    cout  << a << " ";
}
cout << endl;






    return 0;
}


