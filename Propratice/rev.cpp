#include <bits/stdc++.h>
using namespace std;
int reverse(int n , int rev = 0) {
    if(n == 0) return rev;
    int dig = n % 10;
    return reverse(n / 10, rev * 10 + dig);
}
int main() {
    int n;
    cout << "Enter number :";
    cin >> n;
    cout << "Reverse number is this :"<<reverse(n,0)<<endl;
    cout << "-----------------Armstrong number----------------"<<endl;
    int ori, rem = 0, sum = 0, temp;
    ori = n;
    while (n>0) {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n/10;
    }
    // cout << "Sum "<<sum;
    if (ori == sum ) {
        cout << "This is a Armstrong number !";
    } else {
        cout << "! This is not a Armstrong numer ";
    }
    return 0;
}