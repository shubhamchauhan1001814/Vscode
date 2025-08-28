#include <iostream>
#include <queue>

using namespace std;
int main() {

    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
        cout << q.size() << " ";

    q.pop();//

    if(q.empty()==true){
        cout << " yes " << endl;
    }
    else {
        cout << " no"<< endl;
    }

// Printing Front and back of queue
    cout <<"Front " << q.front() << endl;
    cout << "Back " << q.back() << endl;

// Swap
    queue<int> first;
    first.push(10);
    first.push(20);
    first.push(30);
    first.push(40);
    first.push(50);
    // This code is not completed complete it 
    
    

    return 0;
}