#include <vector>
#include <iostream>
using namespace std;

void solve(vector<int> v){
cout << sizeof(v) << endl;
}

int main() {
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    solve(v);


// here we can see the the vector function is passing full array in function.


    

    return 0;
}