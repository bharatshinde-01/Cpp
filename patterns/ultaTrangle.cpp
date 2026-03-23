#include <iostream>
using namespace std;
int main () {
    int n ;
   
     cout<<"Enter the N number :";
     cin >>n;
     for( int i =1 ; i<=n ; i++) {
        for ( int j =1 ; j<=n -i +1; j++){
            // char ch = 'A' + ( j -1); 
            cout<< i <<" "; //cout<<j<<" "; 
            // cout<<ch <<" ";             //char ch = 'A' + (j =1); cout<< ch <<" ";
        }
        cout<<endl;
    }
}
   
    

// #include <iostream>
// using namespace std;
// int main() {
//     int n ; 
//     cout <<"Enter the number :";
//     cin >>n;
//     for ( int i = 1; i<= n; i++) {
//         for( int j = 1 ; j <=i; j++){
//             if( i % 2 !=0) {
//                 cout<<i <<" ";
//             }
//             else {
//             }
//                                    //cout<<n+j-1;
//     }
//         cout<<endl;
//     }
// }



// #include <iostream>
// using namespace std;
// int main () {
//     int n ;
//     int a = 1;
//     cout<< "Enter the NUmber :";
//     cin >>n; 
//     for (int i =1; i<= n; i++){
         
//         for (int j =1 ; j <=i ; j++) {
//             cout<<a++;
//         }
//         cout<<endl;
//     }
// }
