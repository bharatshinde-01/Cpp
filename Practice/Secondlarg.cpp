#include <iostream>
using namespace std;

int main() {
    int n ;
    cout << "Enter the array size :";
    cin >> n;
    int arr[n];
    cout << "Enter the array size :";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max = arr[0];
    int send = 0;
    for (int i = 0; i < n; i++) {
        if(arr[i] > max)
        max = arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i]!= max && arr[i] > send) {
            send = arr[i];     
        } 

    }
    cout << "Your second largest element is this :"<<send;
    return 0;
}