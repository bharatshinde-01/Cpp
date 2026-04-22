#include <bits/stdc++.h>
using namespace std;
class MyArray {
public:
    int*arr;
    int size;
    MyArray(int n){
        size = n;
        arr= new int[n];
    }
    void input() {
        cout<<"Enter arrya elements:";
        for (int i = 0; i <= size; i++) {
            cin >> arr[i];
        }
    }
    void even() {
        cout << "Even number's :";
        for (int i = 0; i < size; i++) {
            if(arr[i]%2==0){
                cout << arr[i]<<"  ";
            }
        
        }
    }
    void odd() {
        cout << "Odd number's :";
        for (int i = 0; i < size; i++) {
            if(arr[i] %2 !=0){
                cout << "  "<<arr[i];
            }
        }
    }
    ~MyArray(){
        delete[] arr;
    }
   
};
int main() {
    int n;
    cout << "Enter n number :";
    cin >> n;
    MyArray A1(n);
    A1.input();
    A1.even();
    A1.odd();
    return 0;
}