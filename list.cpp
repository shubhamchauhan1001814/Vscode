#include <iostream>
#include <list>
using namespace std;
int main() {

    // creation
    list<int>mylist;
    // insertion and removal of element form list
    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);
    mylist.push_back(40);
    mylist.push_back(20);
    mylist.push_front(100);
    mylist.push_front(20);
   
    mylist.pop_back();
    mylist.pop_back();

// Print the Size of list
    cout << mylist.size()<< endl;

    //Clear the list
    // mylist.clear();

// Cheaking the list is empty or not 
if (mylist.empty()== true){
    cout << "List is empty" << endl;
}
else{
    cout <<"List is not empty" << endl;   
}

// Transverse the list using the iterator

list<int>::iterator it =mylist.begin();
while(it != mylist.end()){
    cout << *it << " ";
    it++;
}


// Remove the specific element 
mylist.remove(10);
cout << endl;
list<int>::iterator it2 =mylist.begin();
while(it2 != mylist.end()){
    cout << *it2 << " ";
    it2++;
}

list<int> first;
first.push_back(10);
first.push_back(20);
first.push_back(30);
first.push_back(40);

list<int> second;
second.push_back(111);
second.push_back(222);
second.push_back(333);
second.push_back(444);

first.swap(second);
list<int>::iterator it4 =mylist.begin();
while(it4 != mylist.end()){
    cout << *it4 << " ";
    it4++;
}


// insertion 
first.insert(first.begin(),100);
list<int>::iterator it3 =mylist.begin();
while(it2 != mylist.end()){
    cout << *it3 << " ";
    it3++;
}

// Erase the list
cout << endl << first.size() << endl;

first.erase(first.begin(),first.end());
cout << first.size() << endl;






    


    


    

    return 0;
}