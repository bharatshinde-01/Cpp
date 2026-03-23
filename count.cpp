// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     int count = 0 ;
//     cout <<" Enter numbers if you want count :";
//     cin >>n;
//     while( n != 0) {
//         n = n / 10;
//         count++;
//     }
    

//     cout <<count;

// }
// #include <iostream>
// using namespace std;
// int main(){
//      int n , id , sum = 0;
//     cout<<" Enter the number : ";
//     cin >>n;
        
      
//     while ( n != 0) {
//         id = n % 10 ;
//           n = n / 10;
//         sum += id;
        
//     }
//     cout<<"count :"  <<sum ;
// }
// #include <iostream>
// using namespace std;
// int main () {
//   int n , num , prod = 1;
//   cout<<"Enter the number : ";
//   cin >>n;
//   while (2 %==0){
//    n
//   }
//   cout<<prod;
// }
#include <iostream>
using namespace std;
int main(){
  int n, digit, sum = 0;
  cout<<"Enter the number : ";
  cin >>n; 
  while (n !=0) {
    digit = n % 10;
    if( digit %2 ==0){
      sum += digit;
    }
    else{

    }
    n = n /10;
  }
  cout<<sum;
}