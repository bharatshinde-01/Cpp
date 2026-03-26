#include <iostream>
using namespace std;

    void revarr(int arr[] , int n) {
        int temp;
        for (int i = 0; i < n/2; i++) {
            temp = arr[i];
            arr[i]= arr[n - i -1];
            arr[n - i - 1] = temp;
        }
        for (int i = 0; i < n; i++) {
            cout<<arr[i]<<"  ";
        }
    }
int main() {
    int n;
    cout<<"Enter you array size :";
    cin>>n;
    int array[n];
    cout << "Enter now your array element's :";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    cout << "Your array elements is this ";
    for (int i = 0; i < n; i++) {
        cout<<array[i] <<"  ";
    }
    
    cout <<endl<< "Your array is reverse using fun:";
     revarr( array , n); 
    return 0;
}