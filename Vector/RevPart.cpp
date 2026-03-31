#include <bits/stdc++.h>
using namespace std;
    void Revarr(int arr[] , int i , int j) {
        while (i<j) {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        
    }
int main() {
    int arr[] = {10,20,30,40,50,60,70,80,90,0};
    int n = sizeof(arr)/4;
    for (int i = 0; i < n; i++) {
        cout << "  "<<arr[i];
    }
    cout<<endl;
    Revarr(arr,3,6); // Array madhle pahile 3 aahe tashe rahanar 
    //manje tithun ch array chalu honar aani shectche je numver dile ahet te reverse honar
    for (int i = 0; i < n; i++) {
            cout << "  "<<arr[i];
        }
    return 0;
}
