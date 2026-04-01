#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the array size :";
    cin >> n;
    int arr[n];
     cout << "Enter the array element's";
     for (int i = 0; i < n; i++) {
         cin>>arr[i];
     }
     int i =0 , j = n -1;
     while (i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
         i++;
         j--;
     }
     cout << "Your array revers is this:";
     for (int i = 0; i < n; i++) {
         cout << "  "<<arr[i];
     }
    return 0;
}