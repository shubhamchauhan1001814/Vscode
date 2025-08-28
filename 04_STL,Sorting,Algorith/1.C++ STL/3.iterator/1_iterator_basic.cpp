#include <iostream>
#include <vector>
#include <iterator>
#include <forward_list>
#include <list>
using namespace std;

int main() {
    // // impletation of iterator using vector
//      vector<int>arr;
//         arr.push_back(10);
//         arr.push_back(20);
//         arr.push_back(30);
//         arr.push_back(30);
//         arr.push_back(23);

// // traverse using iterator+
// // create iterator 
//  vector<int>::iterator it =arr.begin();


//  while(it != arr.end()){
//     cout << *it << " " ;
//     it ++;
// }



// // forword move
// forward_list<int> list;
// list.push_front(10);
// list.push_front(20);
// list.push_front(30);

// forward_list<int>::iterator it = list.begin();

// while(it != list.end()){
//     (*it) = (*it) +5;
//     it ++;

// }
// it =list.begin();
// while(it != list.end()){
//     cout << *it << " ";
//     it ++;
// }



// // move backword
// forward_list<int>::iterator it =list.end();
// while(it != list.begin()){
//     cout << *it << " ";
// }

list<int> mylist;
mylist.push_back(10);
mylist.push_back(20);
mylist.push_back(30);

//// traverse using iterator
// list<int>::iterator it =mylist.begin();

// while(it != mylist.end()){
//     (*it)= (*it) + 2;
//     cout  << (*it) << " ";
//     it++;

// }

// // let's try moveing backword in list

// list <int >:: iterator it = mylist.end();
// while(it != mylist.begin()){
//     it--;
//     cout << *it << " ";
// }


//// random access iterator


vector<int>arr ={10,20,30,40,50};
vector<int>:: iterator it = arr.begin();

while(it != arr.end()){
    *it =*it +7;
    cout << *it << " ";
    it ++;
}


vector<int>::iterator it2 =arr.end()-1;
while(it2 !=arr.begin()){
    cout << *it2 << " ";
    it2--;
}
    return 0;
}