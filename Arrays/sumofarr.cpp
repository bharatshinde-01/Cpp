#include <iostream>
using namespace std;

int main() {
    int arr[5]= { 1, 2, 3,4,5};
    int n = sizeof(arr)/4;
    cout<<"Your array numbers is this :";
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<"  ";
    }
    int sum = 0, i;     // for product of array simple change 0 to 1 and + to * 
    for( i = 0; i <=4 ;  i++){
      sum = sum + arr[i];
    }
    cout<<endl;
    cout << "The sum of array is :"<<sum;

    return 0;
}