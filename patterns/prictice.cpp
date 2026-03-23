// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<" Enter the N number :";
//     cin>> n;
//     for( int i =1;i<=n; i++){
//         for(int j=1; j<=i; j++){
//             if( (i+j) % 2==0){
//                 cout<<" 1"<<" ";
//             }
//             else{
//                 cout<<" 0" <<" ";
//             }
//         }
//         cout<<endl;
//     }
// }


// #include <iostream> 
// using namespace std;
// int main() {
//     int n , rev =0 , dig;
//     cout<<" Enter the N number :";
//     cin>>n;
//     for( int i= 1 ; i<=n ; i++){
//         for( int j = 1; j<=i; j++){
            
//                 // dig = n %10;
//                 // n = n/ 10;
//                 // rev = rev * 10 +dig;
                
//                 // cout<<rev <<" ";
            
//             cout<< i - j +1 <<" ";
//         }
//         cout<<endl;
//     }
// }


// #include <iostream>
// using namespace std;
//  int main (){
//     int m;
//     cout<<"Enter the Number :";
//     cin>>m;
//     int n = 1;
//     for( int i = 1; i<=m; i++){
//         for( int j =1 ; j<=m-i; j++){
//             cout<<" ";
//         }
//         for(int l =1 ; l <=i; l++){
//             cout<<n << " ";
//             n++;
//         }
//         cout<<endl;
//     }
//  }


#include <iostream>
using namespace std;
int main() {
    int n; cout<<" Enter the N num:";
    cin>>n;
    
    for( int i =1 ; i<=n; i++){
        for( int j =1; j<=i; j++){
         cout<<j;
        }
        for( int j =1; j<=i -1; j++){
            cout<< i -j;
        }
        cout<<endl;
    }
}