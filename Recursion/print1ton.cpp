// #include <iostream>
// using namespace std;
// void print( int x, int n){
//     if(x > n) return;
//     cout<<x <<endl;
//     print( x +1,n);
// }
// int main() 
// {
//     int n;
//     cout<<"Enter the N number :";
//     cin>>n;
//     print(1,n);
//     return 0;
// }


//Print 1 to n Witour extra parameter :


// #include <iostream>
// using namespace std;
// void print(int n ) {
//     if(n == 0) return; //1 base case
//     print( n -1 );// 3 call ha call 
//     cout<<n <<endl;   //2 work 
// } 
// //
// int main () {
//     int n; 
//     cout<<"Enter the N Num :";
//     cin>>n;
//     print (n);
    
// }
#include <iostream>
using namespace std;
int num( int n , int sum) {
if ( n == 0) { 
   cout<<sum <<endl;
   return sum;
}
 num( n -1, sum + n);
}
      int main() {
      int n;
      cout<<" Enter the N number :";
      cin>>n;
      num( n, 0); 
   
      }