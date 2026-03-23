#include <iostream>
using namespace std;
    int practice( int a , int b) {
            if( b == 0) return 1;
        return practice( a - b,b)* practice(b - a,b);
      
}
int main(){
    int a, b;
    cout<<"Enter A and B number :";
    cin>>a,b;
    cout<<practice(a,b);
    cout<<endl<<a << "  "<<b;
}