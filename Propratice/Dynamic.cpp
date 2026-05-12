// Write a C++ program to create a class ‘MyArray’ which contains single dimensional
// integer array of given size. Write a member function to display even and odd numbers from a
// given array. (Use Dynamic Constructor to allocate and Destructor to free memory of an object)

#include <bits/stdc++.h>
using namespace std;
class MyArray {
public:
    int size;
    int *arr;
    MyArray(int n){
        size = n;
        arr = new int [n];
    }
    void GetMy() {
        cout << "Enter your array elements :";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }
    void Eve() {
        cout << "Even numbers :";
        for (int i = 0; i < size; i++) {
            if(arr[i] % 2 == 0){
                cout << arr[i] <<"   " ;
            }
        }
    }
    void Odd() {
        cout << "Odd numbers :";
        for (int j = 0; j < size ; j++) {
            if( arr[j] % 2 != 0){
                cout << arr[j] <<"   " ;
            }
        }
    }
    ~MyArray(){
        delete[]  arr;
    }
};
int main() {
    int n;
    cout << "Enter array size :";
    cin >> n;
    MyArray A(n);
    A.GetMy();
    A.Eve();
    A.Odd();
    return 0;
}