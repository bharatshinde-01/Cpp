#include <iostream>
using namespace std;
    int sum(int arr[],int n) {
        int sm = 0;
        for (int i = 0; i < n; i++) {
            sm = sm + arr[i];
        }
        return sm;
    }
int main() {
    int n;
    cout << "Enter the array size :";
    cin>>n;
    int arr[n];
    cout << "Enter the array element's :";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"sum of you'r array is : " <<sum(arr,n);
    return 0;
}