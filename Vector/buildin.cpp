// #include <iostream>
// #include <vector>
// #include <algorithm>
 //Data Structures: <vector>, <list>, <map>, <set>, <stack>, <queue>    String <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cout << "Enter the array size :";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cout << "Sort array using Buildin function of vector ";

    sort(arr.begin(), arr.end());// This function sort the array elements direct 

    for (int i = 0; i < n; i++) {
        cout << "  "<<arr[i];
    }
    cout<<endl;
    cout<<"Reverse array using Buildin function of vectoe :";

    reverse(arr.begin(),arr.end()); // This function is reverse the array element's 
    
    for (int i = 0; i < n; i++) {
        cout << "  "<<arr[i];
    }
    return 0;
}