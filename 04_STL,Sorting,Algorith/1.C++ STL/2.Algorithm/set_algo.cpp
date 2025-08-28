#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> first = {1, 2, 3, 4};
    vector<int> second = {5, 6, 7, 8, 1, 2};
    vector<int> result;

    // Ensure the vectors are sorted before set operations (Required for set functions)
    sort(first.begin(), first.end());   // ✅ Sorting first vector
    sort(second.begin(), second.end()); // ✅ Sorting second vector

    // set_union
    result.clear(); // ✅ Clearing result before use
    set_union(first.begin(), first.end(), second.begin(), second.end(), back_inserter(result)); // ✅ Changed inserter to back_inserter

    for (int a : result) {
        cout << a << " ";
    }
    cout << endl;

    // set_intersection
    result.clear(); // ✅ Clearing result before intersection
    set_intersection(first.begin(), first.end(), second.begin(), second.end(), back_inserter(result));

    for (int a : result) {
        cout << a << " ";
    }
    cout << endl;




    // Set difference
    result.clear(); // ✅ Clearing result before intersection
    set_difference(first.begin(), first.end(), second.begin(), second.end(), back_inserter(result));

    for (int a : result) {
        cout << a << " ";
    }
    cout << endl;



    // Set symmetric difference
    result.clear(); // ✅ Clearing result before intersection
    set_symmetric_difference(first.begin(), first.end(), second.begin(), second.end(), back_inserter(result));

    for (int a : result) {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}
