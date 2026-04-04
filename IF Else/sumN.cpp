#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the n nuber :";
    cin >> n;
    if(n > 0) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum = sum + i;
        }
        cout << "Sum of first "<<n <<"number is " <<sum <<endl;
        
    }
    else{
            cout << "Pleae enter a positive number !";
        }
    return 0;
}