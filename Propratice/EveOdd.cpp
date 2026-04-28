// Write A C++ program to create A class ‘MyArray’ which contains single dimensional
// integer array of given size. Write A member function to display even and odd numbers from A
// given array. (Use Dynamic Constructor to allocate and Destructor to free memory of an object)

#include <bits/stdc++.h>
using namespace std;
    class MyArray {
         
    public:
     int *arr;
        int size ;
      MyArray(int n){
        size = n;
     arr = new int[n];
      }
      void Getdata() {
        cout << "Enter your arrya elements :";
          for (int i = 0; i < size ; i++) {
              cin>>arr[i];
          }
      }
      void Even() {
        cout << "Even number's :";
          for (int i = 0; i < size; i++) {
              if( arr[i] %2 == 0){
                cout << arr[i]<<"  ";
              }
          }
          cout<<endl;
      }
      void Odd() {
          cout << "Odd number's :";
          for (int i = 0; i <size ; i++) {
                if(arr[i] %2 != 0){
                    cout << arr[i]<<"  ";
                }
          }
      }
      ~MyArray(){
        delete[] arr;
      }
    };
int main() {
    int n;
    cout << "Enter your Array size :";
    cin>>n;
    MyArray A(n);
    A.Getdata();
    A.Even();
    A.Odd();
    return 0;
}