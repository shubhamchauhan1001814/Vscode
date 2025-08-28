#include <iostream>
#include <unordered_map>
using namespace std;
int main() {

    unordered_map<int, int> desk_map;

    desk_map[1]=53;
    desk_map[2]=54;
    desk_map[3]=55;
    desk_map[4]=56;
    desk_map[2]=52; // Reassign
    
    unordered_map<int,int>:: iterator it;
    for(it =desk_map.begin();it !=desk_map.end(); it++){
        int key =it->first; //syntex
        int value = it->second; // syntex
        cout << "key: " <<key <<"  value: " << value << endl;

    }



// find // find/map bht fast (average cas is O(1));
if(desk_map.find(2) != desk_map.end())
{
  int value = desk_map[2];
  cout << value << endl;
}
//deletion is also form the key
desk_map.erase(2);
for (auto it : desk_map){
        int key = it.first; // corrected syntax
        int value = it.second; // corrected syntax
        cout << "key: " <<key <<"  value: " << value << endl;

    }

if(desk_map.find(2) != desk_map.end())
{
  int value = desk_map[2];
  cout << value << endl;
}
else {
    cout << "not found";
}


    return 0;
}