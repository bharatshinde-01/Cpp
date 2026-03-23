#include <iostream>
using namespace std;
int main() {
    int n, dig, rev = 0 ;
    cout <<"Enter the Number u want to reverse :";
    cin >>n;
    int a = n;
    while (  n != 0 ){
        dig = n % 10;
        n = n/10;
        rev = rev * 10;
        rev = rev + dig ;

    }
    cout << rev <<endl;
    cout << rev + a;

}