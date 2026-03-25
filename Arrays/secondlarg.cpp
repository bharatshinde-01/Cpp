#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the Array size :";
    cin >> n;
    int arr[n];
    int max = 0;
   
    cout << "Enter the array element's :";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if( arr[i] > max)
        max = arr[i];
    }
    cout<<endl<<"Yout Largest element on your array is :" <<max<<endl;
     // second largest element on an array 
    int semax = 0;
    for (int i = 0; i < n; i++) {
        if( arr[i] != max && arr[i] > semax) 
        semax = arr[i];
    }
    cout<<"Your second largest element is This :"<<semax;
    return 0;
}