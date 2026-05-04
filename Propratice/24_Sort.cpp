// Write a C++ template program to sort the array elements of type integer, float and
// character

#include <bits/stdc++.h>
using namespace std;
template <typename T>
void sort( T arr[] , int n){
    for (int i = 0; i < n; i++) {
        for (int j =i+1; j < n; j++) {
            if( arr[i]> arr[j]){
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Sorted array :";
    for (T i = 0; i < n; i++) {
        cout << arr[i] <<"  " ;
    }
}
int main() {
    int n;
    cout << "Enter array size :";
    cin >> n;
    int arr[n];
    cout << "Enter array elements :";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr,n);
    return 0;
}