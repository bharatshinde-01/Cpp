#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n , target;
    cout << "Enter the targer sum :";
    cin >> target;

    cout << "Enter the array size :";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the array element's :";

    bool flag = false;

    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if( arr[i] + arr[j]== target){
                cout << "Match the pair's of your target :"<<arr[i] <<"   And   " <<arr[j] <<"   Sum of pair is :"<<arr[i] + arr[j];
                flag = true;
            }
        }
    }
    return 0;
}