#include <iostream>
using namespace std;
int sum ( int n) {
    // cout<<n<< " ";
    if ( n==1) return 1;
    return n + sum (n -1);   //step I = n ==1 X then return 5 + sum (4);  then 5 + 10 = 15 then hi return main fun value 
                            //step II = n == 1X the return 4 + sum (3); then 4 + 6 = 10 value of this call is 10 ^ 
                            //step III = n == 1X then return 3 + sum(2); then 3 + 3 = 6 value of this call is 6 ^
                            //step IV = n == 1 X then return 2 + sum(1);   2 + 1 = 3 value of this call is 3 ^
                            //step V = n == 1 Yes then hi pass value for IV call then ^
}
int main () {
   int n ;
   cout<<" Enter the N number :";
   cin >>n;
   cout<<sum(n);
}
