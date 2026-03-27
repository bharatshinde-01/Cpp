#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the array size :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Your array elements is this :";
    for (int j = 0; j < n; j++) {
        cout << "  "<< arr[j];
    }
    int mx = arr[0];
    int sx = 0;
    for (int i = 0; i < n; i++) {
        if( arr[i] > mx ) mx = arr[i];
    }
    cout <<endl<<" Max element of your array is this :"<<mx ;
    for (int i = 0; i < n; i++) {
        if( arr[i] != mx && arr[i] > sx) sx = arr[i];
    }
    cout << endl <<" Your second largest element is this :"<<sx;
    return 0;
}