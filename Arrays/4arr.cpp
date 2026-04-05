#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cout << "Enter the array size :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int min = arr[0];
    for (int i = 0; i < n; i++) {
        if(arr[i]< min){
            min = arr[i];
        }
    }
    cout << "Minimum element of an array is :"<<min;
    return 0;
}