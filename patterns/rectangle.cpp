#include <iostream>
using namespace std;
int main() {
     int n , m;
     cout<<"Enter the number of rows :";
     cin>>n;
     cout <<"Enter the number of colums :";
     cin >>m;
     for ( int i =1 ; i <= n ; i++){ // ha rows print kareto 
        for ( int j =1; j <= m ; j++) { // anii ha colms 
        cout <<" * " ;             
     }
     cout <<endl;
    }
}