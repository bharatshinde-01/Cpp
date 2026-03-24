#include <iostream>
using namespace std;

int main() {
    int m;
    cout << "Enter the m number :";
    cin >> m;
    int arr[m];
    cout << "Enter teh array element's :"<<endl;
    for (int i = 0; i < m; i++) {
        cin>>arr[i];
    }
    cout << "You'r array elements is :";
    for (int j = 0; j < m; j++) {
        cout<<arr[j]<<"  ";
    }
    for (int i = 0; i < m; i++) {
        if (i % 2 ==0) {
          arr[i] += 10;
        } 
        else   {
          arr[i] *=2;
        }
    }
    cout << "Your array elements after even index multiple by 2 & odd index adde 10 :";
    for (int i = 0; i < m; i++) {
        cout<<arr[i]<<"  ";
    }
    return 0;
}