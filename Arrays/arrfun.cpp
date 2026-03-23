#include <iostream>
using namespace std;
    void change(int arr[]) {
        arr[ 0 ] = 8;
    }
int main() {
    int    arr[3];
    cout << "Enter the array elements :";
    for (int i = 0; i <= 2; i++) {
        cin>>arr[i];
    }
    cout << "Your array elements is :";
    for (int i = 0; i <= 2; i++) {
        cout<<arr[i]<<" ";
    }
    change(arr);         // Arrays pass by refrence hote he 
    cout << "your aray after change ";
    for (int i = 0; i <= 2; i++) {
        cout<<arr[i];
    }
    return 0;
}
 