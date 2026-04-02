#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[2][3] ={{1,2,3},{4,5,6}};
    cout << "Array 1 elements:"<<endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j]<<"  ";
        }
        cout << ""<<endl;
    }
    int brr[2][3] ={{1,2,3},{4,5,6}};
    cout << "Your second array elements :"<<endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j <3; j++) {
            cout << brr[i][j]<<"  ";
        }
        cout<<endl;
    }
    int sum[2][3];
    cout << "Sum or tow matrix is this :"<<endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
             sum[i][j] = arr[i][j] + brr[i][j];
             cout<<sum[i][j] <<"  ";
        }
        cout<<endl;
    }
    return 0;
}