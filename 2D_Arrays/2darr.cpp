#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[3][4];// [3] is define as a Rows of array
                  // [4] is define as a colum's of array 
    cout << "Enter the 2D array element's :";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin>>arr[i][j];
        }
    }
    cout << "Your array elements is this:"<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout <<arr[i][j]<<"  ";
        }
        cout << ""<<endl;
    }
    return 0;
}