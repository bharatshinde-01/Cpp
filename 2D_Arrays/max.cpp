#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[2][3];
    cout << "Enter the array element's :";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin>>arr[i][j];
        }
    }
    cout << "Your array elements is :"<<endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    int max = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if( arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    int min = max;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if(arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
    cout << "Your max element is this :"<<max<<endl;
    cout << "Your min element is this :"<<min;
    return 0;
}