#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main() {
    
    // creation 
   map<string,string>table;
// insertion 
table["in"] = "India";
table.insert(make_pair("en","england"));

pair<string,string>p;
p.first ="br";
p.second = "brazil";
table.insert(p);

// // This will clear the table
// cout << table.size() <<endl;
// table.clear();
// cout << table.size() << endl;

if(table.empty() == true){
    cout << "empty" << endl;
}
else{
    cout << "Not empty" << endl;
}


// Print the value to corrosponding key
cout << table.at("br") <<endl;

// Modify 
table["in"]="India_3";//method_1
table.at("in") = "india_2";// method_2

// itarator
map<string,string>:: iterator it = table.begin();

while (it != table.end()){
    pair<string, string> p =*it;
    cout << p.first  << " "<< p.second << endl;
    it++;
} 
// Size
cout << table.size() << endl;

// erase
// table.erase(table.begin(), table.end());

// Find key
 if(table.find("in") != table.end()){
    cout << "key found" << endl;
 }
 else{
    cout << "key not found" << endl;
 }


 map<int, string>tab;
 tab.insert(make_pair(1,"Apple"));
 tab.insert(make_pair(2,"ball"));
 tab.insert(make_pair(3,"cat"));
 tab.insert(make_pair(4,"dog"));
 tab.insert(make_pair(5,"Elephant"));
 map<int,string>:: iterator it2 = tab.begin();

while (it2 != tab.end()){
    pair<int, string> p =*it2;
    cout << p.first  << " "<< p.second << endl;
    it2++;
} 
 
    return 0;
}