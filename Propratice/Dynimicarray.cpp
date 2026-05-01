// . Write a C++ program to create a class ‘MyArray’ which contains single dimensional
// integer array of given size. Write a member function to display even and odd numbers from a
// given array. (Use Dynamic Constructor to allocate and Destructor to free memory of an object)

#include <bits/stdc++.h>
using namespace std;
class Myarray {
    int *arr;
    int size;
public:
    Myarray(int n){
        size = n;
        arr = new int [n];
    }
    void Getarr() {
        cout << "Enter array element's :";
        for (int i = 0; i < size ; i++) {
            cin >> arr[i];
        }
    }
    void Even() {
        cout << "Even number's :";
        for (int i = 0; i < size; i++) {
            if(arr[i] %2 == 0) {
                cout << arr[i]<<"  " ;
            }
        }
    }
    void Odd() {
        cout << "Odd numbers :";
        for (int i = 0; i < size ; i++) {
            if(arr[i] %2 != 0){
                cout << arr[i]<<"  " ;
            }
        }
    }
    ~Myarray(){
        delete[] arr;
    }
};
int main() {
    int n ;
    cout << "Enter array size :";
    cin >> n;

    Myarray A(n);
    A.Getarr();
    A.Even();
    A.Odd();
    return 0;
}