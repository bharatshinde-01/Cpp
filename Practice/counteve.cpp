#include <iostream>
using namespace std;
int evecount(int n) {
    if( n == 0) return 0;
    int d = n % 10;
    int sum = 0;
    if( d % 2 == 0) {
        
        return d  + evecount(n /10);
    }
    else return evecount( n /10);
}
int main() {
    int n;
    cout << "Enter the n number's:";
    cin >> n;
    cout<<"The even number's is :"<<evecount(n);

    return 0;
}