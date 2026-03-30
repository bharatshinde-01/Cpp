#include <bits/stdc++.h>
using namespace std;

int main() {
    int target ;
    cout << "Enter the target Number ";
    cin >> target;
    int n ;
    cout << "Enter the array element :";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the array element :";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << endl;
    cout << "Your array element's is this :";
    for (int i = 0; i < n; i++) {
        cout << "  "<<arr[i];
    }
    cout<<endl<<endl;
    cout << "Pairs that match the target sum = ";
    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = i +1; j < n; j++) {
            if( arr[i] + arr[j] == target){
               cout << "Found pairs :" <<arr[i] <<" and " <<arr[j]<<"And their Sum is =" <<arr[i]+arr[j];
               found = true;
            }
        }
        cout<<endl;
    }

    return 0;
}