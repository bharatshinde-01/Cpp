#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cout << "Enter the array size :";
    cin >> n;
    int arr[n];
    cout << "Enter the array elemet's :"<<endl;
    for (int j = 0; j < n; j++) {
        cin>>arr[j];
    }
    cout << "Yout array element's is this :";
     for (int i = 0; i < n; i++) {
         cout<<arr[i];
     }
    return 0;
}