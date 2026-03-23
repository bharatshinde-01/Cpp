#include <iostream>
using namespace std;
void swaprec( int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<a <<" " <<b;
}
int main(){
    int a , b; // a =5 , b = 6;
    cout<<"Enter the a number :";
    cin>>a;
    cout<<"Enter the b number :";
    cin>>b;
    swaprec(a , b);
    // cout<<a <<"  " <<b;
    return 0;
}