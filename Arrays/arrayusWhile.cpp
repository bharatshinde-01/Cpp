#include <iostream>
using namespace std;

int main() {
    int n;
      cout << "Enter the array size :";
    cin>>n;
    
    int arr[n];
int i = 0;
    while (i <n ) {
        cin>>arr[i];
        i++;
    }
    cout << "You entred array elements is :";
    i = 0;
while (i < n) {
        cout<<arr[i]<<"  ";
        i++;
    }
    return 0;
}