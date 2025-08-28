#include <iostream>
#include<deque>
using namespace std;
int main() {

    deque<int>dq;

    //insertion 
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);

    dq.push_front(11);
    dq.push_front(22);
    dq.push_front(33);

    dq.pop_front();
    dq.pop_back();
// Size
   cout <<  dq.size() << endl;


   // front and back element print
   cout << dq.back() << endl;
   cout << dq.front() << endl;

   if(dq.empty()== true){
    cout << " empty" << endl;
   }
   else{
    cout << " Not empty" << endl;
   }

   // itarator
   deque<int>:: iterator it = dq.begin();
   while(it != dq.end()){
    cout << *it << " ";
    it++;
   }

   // access ramdom element
   cout << dq[3] << endl;
   cout << dq[0] << endl;


   // To clear the element 
//    dq.clear();


// Another way of insertion 
dq.insert(dq.begin(),101);


// Erase
// dq.erase(dq.begin(), dq.end());









    
    

    return 0;
}