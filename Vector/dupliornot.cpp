#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    vector<int> arr(n);
    cout << "Enter the element's :";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cout << "Duplicate numbers :";
    for (int i = 0; i < n; i++) {
        for (int j = i +1; j < n; j++) {
            if( arr[i]==arr[j]){
                cout << "This numbers are duplicate's in an array's :"<<arr[i];
            }
        }
    }
    return 0;
}