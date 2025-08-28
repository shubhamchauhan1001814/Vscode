#include <iostream>
#include <vector>
using namespace std;

void print(const vector<int>& v) { // Pass by reference
    for (int num : v) { // Range-based loop
        cout << num << endl;
    }
}

int main() {
    vector<int> v;  
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    print(v);

    return 0;
}
