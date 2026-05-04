#include <bits/stdc++.h>
using namespace std;
    template <typename T >
    void sortArr( T arr[], int n){
       
        
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                if(arr[i]> arr[j]){
                    T temp = arr[i];
                     arr[i] = arr[j];
                     arr[j] = temp;
                }
            }
        }
        cout << "Sorted array :"; 
        for (int i = 0; i < n; i++) {
            cout << arr[i] <<"  " ;
        }
    }
int main() {
    int n;
    cout << "Enter array size :";
    cin >> n;
    int arr[n];
    float ar[n];
    cout << "Enter array elements :";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sortArr(arr,n);

    cout<<"Enter float values :" ;
    for (int i = 0; i < n; i++) {
        cin>>ar[i];
    }
    sortArr(ar,n);
    char ch[n];
    cout << "Enter your characters :";
    for (int i = 0; i < n; i++) {
        cin >>ch[i];
    }
    sortArr(ch,n);
    
    return 0;
}