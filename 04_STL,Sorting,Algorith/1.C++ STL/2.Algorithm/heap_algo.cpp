#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>


int main() {
    vector<int> arr={35,76,335,764,78,945,7,3636,88,335,7,456,24,63};
    make_heap(arr.begin(),arr.end());
    for(int a: arr){
        cout << a << " ";
    }
    cout << endl;




//adding the element in heap
    // This will disturb the heap property
    arr.push_back(99);
//after then  use this 
push_heap(arr.begin(), arr.end());
for(int a: arr){
    cout << a << " ";
}
cout << endl;



// deletion 
pop_heap(arr.begin(), arr.end());
for(int a: arr){
    cout << a << " ";
}
cout << endl;
// the heap is pop but poped element is in the end
// remove it 
arr.pop_back();
for(int a: arr){
    cout << a << " ";
}
cout << endl;
// now the pop done completely





// Sort heap
sort_heap(arr.begin(), arr.end());
for(int a: arr){
    cout << a << " ";
}
cout << endl;



    return 0;
}