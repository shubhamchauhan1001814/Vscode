#include <iostream>
#include <queue>
using namespace std;
int main() {
    
    priority_queue<int> pq;
    // max-heap ->maximum value -> highest Priority
    pq.push(10);
    //10
    pq.push(20);
    //20,10
    pq.push(30);
    // p
    pq.push(40);

    // top element -->Highest priority elemnt

    cout << pq.top() << endl; // 40 because 40 is highest 

    pq.push(120);
    pq.push(130);
    pq.push(140);
    
    
    // for (int i=0; i<pq.size(); i++){
    // cout << pq.top() << endl;
    // pq.pop();
    // }



// Creation of min heap
    priority_queue<int, vector<int>, greater<int>>pq_min;

    pq_min.push(100);
    pq_min.push(50);
    pq_min.push(700);
    pq_min.push(5200);

    cout << pq_min.top() << endl;
    

    return 0;
}