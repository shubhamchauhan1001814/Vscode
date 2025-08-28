#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>  // For accumulate

using namespace std;

int main() {
    // Define vector with initial values
    vector<int> arr = {34, 84, 17, 59, 37};

    // Calculate sum
    int totalSum = accumulate(arr.begin(), arr.end(), 0);

    // Output sum
    cout << totalSum << endl;





 // inner product
    vector<int> first ={23,54,54};
    first.push_back(35);
    vector<int> second ={43,65,75};
    second.push_back(73);
// syntex 
    inner_product(first.begin(), first.end(), second.begin(),0);
    int ans =inner_product(first.begin(), first.end(), second.begin(),0);
   
cout<< ans << endl;




//partial sum 
vector<int> result(first.size());
partial_sum(first.begin(), first.end(),result.begin());
for (int a: result){
    cout  << a << " ";
}
cout << endl;




// iota
iota(first.begin(), first.end(),250);
for (int a: first){
    cout  << a << " ";
}
cout << endl;
// Other example
vector<char> character(10);
iota(character.begin(), character.end(),'a');
for (char a: character){
    cout  << a << " ";
}
cout << endl;

    return 0;
}
