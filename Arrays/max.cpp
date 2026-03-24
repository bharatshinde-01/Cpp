#include <iostream>
using namespace std;

int main() {
    int arr[]= { 12,345,13, 5445,6543, 23, 45632, 234};
    int n = sizeof( arr)/ 4;
    for (int i = 1; i < n; i++) {
        cout<<arr[i]<<"  ";
    }
    int mx = arr[0];
    for (int j = 1; j < n; j++) {
        if( arr[j] > mx) mx = arr[j];
    }
    cout<<endl<<mx;
    return 0;
}