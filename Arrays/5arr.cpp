#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cout << "Enter the array size :";
    cin>>n;
    int arr[n];
    cout << "Enter the array element's :";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int even = 0 , odd = 0;
    for (int i = 0; i < n; i++) {
        if( arr[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout << "Even number count :"<<even<<endl;
    cout << "Odd number count :"<<odd;
    return 0;
}