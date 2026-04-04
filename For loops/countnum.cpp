#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cout << "Enter the number's :";
    cin>>n;
    int count = 1;
    
    for (int i = 1; i < n; i++) {
       int d = n % 10;
       count++;
       n = n / 10;
    }
    cout<<"Number's count:"<<count;

    return 0;
}