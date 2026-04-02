#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[3][4];
    cout << "Enter the array element's :";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin>>arr[i][j];
        }
    }
    cout << "Your array elements is :"<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    int max = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if( arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    cout << "Your max element is this :"<<max;
    return 0;
}