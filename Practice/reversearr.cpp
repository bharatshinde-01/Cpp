#include <iostream>
using namespace std;
    int* Array ( int arr[], int n) {
        int temp;
        for (int i = 0; i < n/2; i++) {
            temp = arr[i];
            arr[i] = arr[n - i- 1];
            arr[n - i -1] = temp;
        }
        return arr;
    }
int main() {
    int arr[7] = { 1,5,2,4,6,7,8};
    Array(arr,7);
    cout << "Your reverse array is this :";
    for (int i = 0; i < 7; i++) {
        cout << "  " <<arr[i];
    }
    return 0;
}