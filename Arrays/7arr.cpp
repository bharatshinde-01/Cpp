#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = { 1, 2, 4,3 , 6};
    float sum = 0, avg = 5;
    cout << "Your array elements :";
    for (int i = 0; i <= 4; i++) {
        cout << arr[i]<<"  ";
        sum = sum + arr[i];
    }
    cout << "Average of array elements is :"<<sum/avg;
    
    return 0;
}