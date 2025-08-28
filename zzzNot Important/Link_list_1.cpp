#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
};

int main() {
    Node a = {100, NULL};
    Node b = {40, NULL};
    Node c = {80, NULL};
    Node d = {20, NULL};
    Node e = {30, NULL};
    Node f = {50, NULL};
    Node g = {10, NULL};
    Node h = {90, NULL};
    Node i = {70, NULL};
    Node j = {60, NULL};
    
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = &f;
    f.next = &g;
    g.next = &h;
    h.next = &i;
    i.next = &j;
    
    // Traverse the list and print the values
    Node* p = &a;
    while (p != NULL) {
        cout << p->val << " " << p << endl;
        p = p->next;
    }
    cout << endl;
    return 0;
}
