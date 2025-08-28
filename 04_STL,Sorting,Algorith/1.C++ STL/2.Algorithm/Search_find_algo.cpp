#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

    // Binary serch
    // it will return boolean
    vector<int>arr={23,65,74,35,56,77,34,56,78,75,334,5,6};
    int target=34;
    int it =binary_search(arr.begin(),arr.end(), target);
    cout << it << endl;


    // lower_bound
    auto it_2 =lower_bound(arr.begin(), arr.end(),35);
    cout << *it_2 << endl;


        // lower_bound
        auto it_3 =upper_bound(arr.begin(), arr.end(),35);
        cout << *it_3 << endl;


    int a = 34;
    int b = 30;
    cout << max(a,b) << endl;
    cout << min(a,b) << endl;
    

    auto it_4 = min_element(arr.begin(), arr.end());
    cout << *it_4 << endl;

    auto it_5 = max_element(arr.begin(), arr.end());
    cout << *it_5 << endl;

    return 0;
}