#include <iostream>
using namespace std;

int main() {
    int x = 2;
    int n;
    cout << "Enter the array size :";
    cin >> n;
    int arr[n];
    cout << "Enter the array element's :";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if( x < arr[i])
        count++;
    }
    cout << "Greater than x numbers is this :"<<count;
    return 0;
}