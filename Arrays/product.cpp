#include <iostream>
using namespace std;

int main() {
    int n ;
    cout << "Enter the array size :";
    cin >> n;
    int arr[n];
    int prod = 1;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        prod = prod * arr[i];
    }
    cout << "Your array product is this :"<<prod;
    return 0;
}