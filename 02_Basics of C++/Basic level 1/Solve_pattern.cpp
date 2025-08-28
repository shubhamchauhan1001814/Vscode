#include<iostream>
using namespace std;
int main()
{

    // // Squre
    // for(int i=1;i<=5;i+=1){
    //     cout << i << "->";
    //     for(int j=1;j<=2;j++){
    //         cout << "*" ;
    //     }
    // }
    // cout << endl;



// // User define
//     int a, b;
// cout << "Enter the rows: ";
// cin >> a;
// cout << endl;
// cout << "Enter the Column: ";
// cin >> b;
// cout << endl;

    
//     for(int i=1;i<=a;i+=1){
//         for(int j=1;j<=b;j++){
//             cout << "* " ;
            
//         }
//         cout << endl;
//     }


// Squre


//     int a, b;
// cout << "Enter the length of side: ";
// cin >> a;
// cout << endl;

// cout << endl;

    
//     for(int i=1;i<=a;i+=1){
//         for(int j=1;j<=a;j++){
//             cout << "* " ;
            
//         }
//         cout << endl;
//     }


// // Hollow ractangle

// int a,b;
// cout << "Enter the length of side: ";
// cin >> a;
// cout << endl;
// cout << "Enter the width of side: ";
// cin >> b;
// cout << endl;


// for(int i=1; i<=a; i+=1)
// {
//     for(int j=1;j<=b;j++){

//        if(i==1 || i==a){
//         cout << "* ";
//        }
//        else if (j==1 || j==b){
//         cout << "* ";
//        }
//        else {
//         cout << "  ";
//        }

//     }
//     cout << endl;
// }





//// Time paas
// for(int p=1; p<=5; p+=1){

// for(int q=1; q<=5; q+=1){

// for(int i=1; i<=p; i+=1)
// {
//     for(int j=1; j<=q; j++){

//        if(i==1 || i==p){
//         cout << "* ";
//        }
//        else if (j==1 || j==q){
//         cout << "* ";
//        }
//        else {
//         cout << "  ";
//        }

//     }
//     cout << endl;}  cout << endl;}
//     cout << endl;
//         cout << endl;
// }




// Easy Hollow


// for (int d=1; d==1;){
// int a,b;
// cout << "Enter the length of side: ";
// cin >> a;
// if(a==0) break;
// cout << endl;
// cout << "Enter the width of side: ";
// cin >> b;
// cout << endl;
// for(int i=1; i<=a; i+=1)
// {
//     for(int j=1;j<=b;j++){

//        if(i==1 || i==a || j==1 || j==b){
//         cout << "* ";
//        }
//        else {
//         cout << "  ";
//        }

//     }
//     cout << endl;
// }
// }



// // My method to make my paramid 
// int a=1;
// for(int i=0;i<=5;i++){
//     for(int j=0;j<a;j+=1){
//          cout << "* " ;
//     }
//     cout << endl;
//     a++;
// }
//  cout << endl;
//   cout << endl;
// a-=3;
// for(int i=0;i<=5;i++){
//     for(int j=-1;j<a;j+=1){
//          cout << "* " ;
//     }
//     cout << endl;
//     a--;
// }


// // Sir method
// cout << "Enter the number of Row: ";
// int n;
// cin >> n; 
// cout << endl;

// for(int row=0;row<n;row++){
//     for(int col=0;col<n-row;col+=1){
//          cout << "* " ;
//     }
//     cout << endl;
// }


// Hollowed inverse pyramid (try )
// cout << "Enter the number of Row: ";
// int n;
// cin >> n; 
// cout << endl;

// for(int row=0;row<n;row++){
//     for(int col=0;col<n-row;col+=1){
//         if(col==0 || col==n-row-1 || row==0){
//             cout << "* " ;

//         }
//         else {
//             cout << "  ";
//         }
         
//     }
//     cout << endl;
// }



// Digonal pyramid
cout << "Enter the number of Row: ";
int n;
cin >> n; 
cout << endl;

for(int row=0;row<n;row++){
    for(int col=0;col<n-row;col+=1){
        if(col==0 || row+col==n-1 || row==0){
            cout << "* " ;

        }
        else {
            cout << "  ";
        }
         
    }
    cout << endl;
}




    return 0;
}