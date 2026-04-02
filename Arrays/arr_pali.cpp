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
    bool pali = true;
    while (i < j) {
        if (arr[i] != arr[j]) {
            pali = false;
            break;
        }
        i++;
        j--;
    }
    if (pali) {
        cout << "The array is a palindrome!" << endl;
    } else {
        cout << "The array is not a palindrome." << endl;
    }
    return 0;
}