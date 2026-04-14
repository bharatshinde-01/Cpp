#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the array size :";
    cin>>n;
    int arr[n];
    cout << "Enter the array elements :";
    for (int i = 1; i <= n; i++) {
        cin>>arr[i];
    }
    cout << "Reverse array using For loop ";
    for (int i = n; i >=1; i--) {
        cout << arr[i]<<"  ";
    }
    return 0;
}