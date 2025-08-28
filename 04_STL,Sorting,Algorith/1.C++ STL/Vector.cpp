#include <iostream>
#include <vector>
using namespace std;
int main() {

    // creation 
        
        // Simple Creation of vector of marks  
         vector<int>marks;

         // pre assign 10 element in vector
         vector<int>miles(10);

         // initilize 15 element with 0
         vector<int>distance(15,0);
        
         cout << *(distance.begin()) << endl;
         
        marks.push_back(10);
        marks.push_back(20);
        marks.push_back(30);
        marks.push_back(40);
        marks.push_back(50);
        marks.push_back(60);
        cout << "Size" << marks.size() << endl;

        marks.pop_back();


        cout << marks.front() << endl;
        cout << marks.back() << endl;
        


        if(marks.empty() == true){
           cout << "vector is empty" << endl;

        }
        else{
            cout << "vector is not empty" << endl;
        }

         // this code is not work
        // vector<int>age;
        // age[0]=10;

        // This is work fine
        vector<int>age(100);
        age[0]=10;
        
        // Bothe the line will same 
        cout  << marks [0] << endl;// using Squere bracket
        cout << marks.at(0) << endl;// using at function

        cout << marks.capacity() << endl;

       vector<int>apple;
       cout << apple.capacity() <<endl;
       
       // i want to reserve the capacity 
       apple.reserve(10);
       cout << apple.capacity() << endl;

       cout << apple.max_size() << endl;

       // To clear the vector 
      // marks.clear();
       //cout << marks.size()<< endl;



       //insertion of element 
      marks.insert(marks.begin(),50);
      cout << marks.size() << endl;
      cout << marks[0] <<endl;
      
      // erase the function at the preticular function 
      cout << marks.size() << endl;
      marks.erase(marks.begin(), marks.end());
      cout << marks.size() << endl;

      // Swap the contain within the vectors 
      
      vector<int>first;
      vector<int>second;

      first.push_back(11);
      first.push_back(22);
      first.push_back(33);
      first.push_back(44);
      first.push_back(55);
      

      second.push_back(100);
      second.push_back(200);
      second.push_back(300);
      second.push_back(400);
      second.push_back(500);
      cout << first[0] << " "<< first[1] << " "<<first[2] << " " <<first[3] << " " << first[4] <<" " << first[5]<< endl;
      first.swap(second);

      cout << first[0] << " "<< first[1] << " "<<first[2] << " " <<first[3] << " " << first[4] <<" " << first[5]<< endl;

      // for printing of each element of vector
    //   for(int i=0;i<6;i++){
    //     cout << first[i]<<" " << endl;
    //   }
// OTHER METHOD 
for(int i:first){
    cout << i << " ";
}
cout << endl;

for(int i:second){
    cout << i << " " ;
}

cout << endl;



// Traversing the vector using iterator
// create an iterator syntex
vector<int>::iterator it = first.begin ();

while(it != first.end()){
    cout << *it << " ";
    it++;
}




// Making the 2d Array using 2d Array 

// Simple vector
vector<vector<int>>arr(4,vector<int>(4,0));
int totalRows = arr.size();
int tatalColumn = arr[0].size();
int totalCell = tatalColumn*totalRows;
cout << totalCell << endl;

//Variation in Size in vector
vector<vector<int>> brr(4); // Rows are defined Here
// Now column of each row define one by one 
brr[0] =vector<int>(4);
brr[1] =vector<int>(2);
brr[2] =vector<int>(5);
brr[3] =vector<int>(3);

int totalRowCount =brr.size();
int totalCell_brr =0;
// Traversing the 2D vector using iterator
int adder=0;
for(int i=0;i<totalRowCount; i++){
vector<int>::iterator it = brr[i].begin ();
while(it != brr[i].end()){
    cout << *it << " ";
    it++;
    adder++;

}
cout<< endl;
}
cout << endl;
totalCell_brr =totalCell_brr +adder;
adder=0;
cout << "Total Cell = " << totalCell_brr<< endl;


return 0;
}