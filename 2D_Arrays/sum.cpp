#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[2][3];
    cout << "Enter the array elements:";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin>>arr[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            sum = sum + arr[i][j] ;
        }
    }
    cout << "Sum of you'r array is this :" <<sum;
    return 0;
}