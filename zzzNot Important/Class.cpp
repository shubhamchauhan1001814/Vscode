#include <iostream>
#include <string>
using namespace std;
class student{
 public:
    int id;
    int age;
    string name;
    int nos;
    // Behaviour / Method / Function
    void study(){
        cout << this->name << "Studying" << endl;
    }
    void sleep(){
        cout << "sleeping" << endl;
    }
    void bank(){
        cout << "Banking" << endl;
    }
};
int main() {
    return 0;
}