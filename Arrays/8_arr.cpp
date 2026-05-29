// Search for a given element using Linear Search.
// 👉 Hint: Compare each element with key.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter your array size :";
    cin >> n;
    cout<<"Enter your array elements : " ;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cout << "Enter your number to search in your array :";
    int k;
    cin >> k;
    for (int i = 0; i < n; i++) {
        
            if( arr [i] == k ){
                cout << "your element is this :" << arr[i]<<endl;
               
                cout <<"position in array is : " <<i <<endl;
            
        }
    }
    return 0;
}
