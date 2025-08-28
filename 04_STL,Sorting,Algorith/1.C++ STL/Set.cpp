#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;
int main() {
    unordered_set<int> st;

    st.insert(10);
    st.insert(15);
    st.insert(8);
    st.insert(17);
    
    // tarverse
    unordered_set<int>::iterator it =st.begin();
    while(it!=st.end()){
        cout << *it << " ";
        it++;
    }

    // size
    cout << st.size() << endl;

    // empty

    // clear

    //erase


    // find
if(st.find(15) != st.end()){
    cout << "found";}
else{
    cout << "not found";
}

if(st.count(40) == 0){
cout << "found";
}
if(st.count(40)==1){
    cout << "Not found";
}

    return 0;
}