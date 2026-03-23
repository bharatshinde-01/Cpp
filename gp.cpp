#include <iostream> 
using namespace std;
int main() {
     
    // int n ;
    // int a = 3;
    // cout << " Enter the N number :";
    // cin >> n;
    // for (int i = 1 ; i <= n; i ++) {
    //     cout << a ;
    //     a = a * 4;
       

    // }
    int n , f = 1;
    cout <<"Enter the nulmber : " ;
    cin >> n ;
    for ( int i = 1 ; i <= n ; i ++) {
        if ( n % i == 0 )  
        f = i ;
      
   
                         // i = i * 2 - 1; is used to skip even numbers and only print odd numbers.
    }
    cout <<f - 12;

}