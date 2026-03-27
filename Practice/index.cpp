#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the array size :";
    cin >> n;
    int arr[n];
    cout<<"Enter your array element's :";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cout << "You'r array element is :"<<arr[i] <<endl;
    }
    cout <<endl;
    cout << "Your entred array even index elements is :";
    for (int i = 0; i < n; i++) {
        if(i % 2 == 0){
            cout << "  "<<arr[i];
        }
        // else cout << "  "<<arr[i];
    }
    cout << endl<<"Your entred array odd index elements is :";
    for (int i = 0; i < n; i++) {
        if( i % 2 != 0)
        cout << "  " <<arr[i];
    }
    return 0;
}