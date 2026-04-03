#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5][4];
    cout << "Enter the array element's :";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            cin>>arr[i][j];
        }
    }
    int a , b , c ,d;
    cout << "Enter the row start cord:";
    cin>>a;
    cout << "Enter the end row cord :";
    cin>>b;

    cout << "Enter the colum start cord :";
    cin>>c;
    cout << "Enter the colum end cord :";
    cin>>d;

    int sum = 0;

    cout << "Sum of your cordanets is this :";
    for( int i = a; i <= b ; i++){
        for( int j = c ; j <= d; j++){
            sum = sum + arr[i][j];
        }
    }
    cout << "Sum or your coordinates is this :"<<sum;
    
    return 0;
}