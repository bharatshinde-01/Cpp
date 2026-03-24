#include <iostream>
using namespace std;

int main() {
    int eve =0 , odd = 0 , n ;
     
    cout << "Enter the Array size :";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements :";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Your array elements is : ";
    for (int i = 0; i < n; i++) {
        cout<<arr[i] <<"  ";
    }

    for (int i = 0; i < n; i++) {
        if( i % 2 ==0){
            eve = eve + arr[i];
        }
        else {
            odd = odd + arr[i];
        }
    }
    cout<<endl<<"Your even elements sum is :"<<eve <<endl <<"Your odd elements sum is :"<<odd;
    return 0;
}