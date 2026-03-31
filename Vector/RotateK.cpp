#include <bits/stdc++.h>
// #include <vector>
// #include <iostream>
// #include <algorithm>
using namespace std;
    void rev(vector<int> &arr , int i ,int j) { // vector array pass kartane & arr[] square bracket's nahi lavayche
        while (i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
int main() {
    int n , k;
    cout << "Enter the array size :";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the array element's :";
    for (int i = 0; i < n; i++) {
        cin>>v[i];
    }
    cout << "Your array element's :";
    for (int i = 0; i < n; i++) {
        cout<<"  "<<v[i];
    }
    cout << endl;
    cout << " Enter the rotation's you want ro perforn on it an array :";
    cin >> k;
    int m = v.size();
    k = k % m;
    rev(v, 0 , n - k -1);
    cout << "First Step !"<<endl;
    for (int i = 0; i < n; i++) {
        cout << "  "<<v[i];
    }
    rev ( v , n-k , n-1);
    cout <<endl<< "Second step !"<<endl;
    for (int i = 0; i < n; i++) {
        cout << "  "<<v[i];
    }
    cout <<endl<< "Final step !"<<endl;
    rev(v , 0 , n-1);
    for (int j = 0; j < n; j++) {
        cout << "  " <<v[j];
    }
    return 0;
}