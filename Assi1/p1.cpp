#include <iostream>
using namespace std;
int main() {
    int n;
    long long fact = 1;
    cout <<"Enter number :";
    cin>> n;
    if( n < 0) {
        cout <<"Enter number is not possible to factorial";
    }
    else {
        for (int i = 1; i <=n; i++) {
            fact = fact * i;

        }
        cout <<" factorial number is : " << fact;

    }
    return 0;
}