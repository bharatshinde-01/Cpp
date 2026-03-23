// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the n number :";
//     cin >>n;
//     for( int i = 1; i <= n; i++) {
//         for (int j = 1; j<=i; j++) {
//             cout <<" * ";
//         }
//         cout<<endl; 
        
//     }
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the n number :";
//     cin >>n;
//     for( int i = 1; i <= n; i++) {
//         for (int j = 1; j<=i; j++) {
//             cout <<(char) ( i + 64);
//         }
//         cout<<endl; 
        
//     }
// }




// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the n number :";
//     cin >>n;
//     for( int i = 1; i <= n; i++) {
//         for (int j = 1; j<=i; j++) {
//             cout <<j <<" ";
//         }
//         cout<<endl; 
        
//     }
// }

// #include <iostream>
// using namespace std;
// int main () {
//     int i , j,n;
//     cout<<"Enter the n number ";
//     cin>>n;
//     for( i = 1; i <= n; i++){
//         if ( i % 2 == 1) {
//             for ( j =1 ; j<=i; j++){
//                 cout<<j <<" ";
//             }
//         }
//         else {
//             for( j = 1; j<=i ; j++) {
//                 char ch = 'A' + (j - 1);
//                 cout<< ch << " ";
//             }
//         }
//         cout<<endl;
//     }
// }



#include <iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the Number :";
    cin>>n;
    for( int i = 1; i <= n; i++) {
        if( i % 2 == 1) {
            for( int j = 1; j <= i; j++) {
                cout <<j << " " ;
            }
        }
        else {
            for ( int j = 1 ; j <= i ; j++) {
                char ch = 'A' + ( j -1);
                cout<<ch <<" ";
            }
        }
        cout<<endl;
    }
}