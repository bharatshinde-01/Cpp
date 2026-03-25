#include <iostream>
using namespace std;

    void printArr(int arr [], int n = 5) {
        cout << "Your Array is This :";
        for (int i = 0; i < n; i++) {
           cout<<arr[i]<<"  "; 
        }
    }

int main() {
    int a[5] = { 1, 2,3,4,5};
    printArr(a);
    return 0;

}