// #include <iostream>
// using namespace std;
// int fact ( int n) {
//     int f = 1;
//     for ( int i =1; i<= n; i++){
//         f *= i;
//     }
//     return f;
// }
// int ncr( int n , int r){
//     int a = fact (n);
//     int b = fact (r);
//     int c = fact (n - r);
    
//     return a / ( b * c);

// }
// int main() {
//     int n; 
//     cout<<"Enter the N number :";
//     cin>>n;
//     for( int i =0; i<=n; i++){
//         for( int j =0 ; j <= i ; j++){
//             cout<<ncr(i,j) <<"  ";
//         }
//         cout<<endl;
//     }
// }  


#include <iostream>
using namespace std;
int fact ( int n) {
    int f = 1;
    for ( int i =1; i<= n; i++){
        f *= i;
    }
    return f;
}
int ncr( int n , int r){
    int a = fact (n);
    int b = fact (r);
    int c = fact (n - r);
    
    return a / ( b * c);

}
int main() {
    int n; 
    cout<<"Enter the N number :";
    cin>>n;
    for( int i =0; i<=n; i++){
        for( int j =0 ; j <= n -i ; j++){
            cout <<"  ";
        }
        for( int j = 0; j<= i; j++){
            cout<<ncr( i ,j) <<"   ";
        }
        cout<<endl;
    }
}