#include <iostream>
using namespace std;
int main() {
    int n , a= 1, b =1, c=1;
    cout<<" Enter the N number :";
    cin>> n;
    int m; 
    cout<< " Enter the M number :";
    cin>>m;
    for( int i =1; i<=n;i++){
        a = a * i;
    }
    for( int i = 1; i<=m; i++){
        b = b * i;
    }
    for ( int i = 1; i <= n -m ; i++){
        c = c * i;
    }
    cout<<" Combnation Num :" << a / ( b * c);
    cout<<endl <<endl <<endl;

     int w;
     cin>>w;
     
    for( int i=1 ;i <= w; i++) {
        for ( int j =1 ; j<=w -i ; j++) {
            cout<<" ";
        }
        for( int j =1; j <=i; j++ ){
            cout<<" *";
        }
        cout<<endl;
    }
}