#include <iostream>
using namespace std;

int main() {
    int x = 4, count = 0;
    int n ;
    cout << "Enter the Array size :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<endl<<"Your array size is :";
    for (int j = 0; j < n; j++) {
        cout<<arr[j]<<"  ";
    }
    for (int i = 0; i < n; i++) {
        if( arr[i] > x) 
        count++;
    }
    cout << "Elements greter than X is "<<count;
    return 0;
}