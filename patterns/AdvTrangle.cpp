// #include <iostream>
// using namespace std;
// int main() {
//      int n; 
//      cout<<"Enter N:";
//      cin>>n;
//      int m; 
//      cout<<"Enter M:";
//      cin >>m;
//      for ( int i =1; i <=m ; i++){
//         for ( int j = 1; j<= n ;j++){
//          if ( i ==j || i +j == n +1) { // if( i==1 || i ==n || j== m || j ==1)
//              cout<<"*" <<" ";
            
//         }
//         else {
//             cout<<" " <<" ";
//         }
        
//      }
//      cout<<endl;
// }
// }
#include <iostream>
using namespace std;
int main () {
    int n; 
    // char ch = 'A';
    cout<< " Enter the N number :";
    cin>>n;
    for (int i = 1; i <=n ; i++) {
        for (int j =1 ; j <= n-i ; j++) {
 
            cout<<"    ";
        }
            for( int j =1; j<=i ; j++){
            cout<<"   *    "; 
                // cout<< (char) (j + 64) <<" ";
                // cout <<j <<" ";         //cout<<" * " ;
            }

        
        cout<<endl;
    }
}
