#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , m ;
    cout << "Enter the array's Rows:";
    cin >> n;
    cout << "Enter the array's colum's :";
    cin >> m;
    int arr[n][m];
    cout << "Enter the array elements:"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>arr[i][j];
        }
    }
    cout << "Your array elements is this :"<<endl;
//    for (int j = 0; j <m; j++) {             // colum's 
//        for (int i = 0; i < n; i++) {            // row
//            cout<<arr[i][j]<<"   ";
//        }
//        cout<<endl;
//    }
for (int i = 0; i < n; i++) {    // row 
    for (int j = 0; j < m; j++) {  // colums
        cout<<arr[i][j] <<"  ";
    }
    cout<<endl;
}
    return 0;
}