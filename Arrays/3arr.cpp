#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cout << "Enter the array size :";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements :";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int max = arr[0];
    for (int i = 0; i < n; i++) {
        if( arr[i] > max ){
            max = arr[i];
        }
    }
    cout << "Max elemetn is this :"<<max;
    return 0;
}