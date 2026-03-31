#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    vector<int> arr(n);
    vector <int> brr(n);
    cout << "Enter the array element's :";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Copy one array to another array in Reverse order :";
    for (int i = 0; i < n; i++) {
        brr[i] = arr[n - 1 - i];
    }
    for (int i = 0; i < n; i++) {
        cout << brr[i] <<"  ";
    }
    return 0;
}