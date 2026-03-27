#include <iostream>
using namespace std;

int main() {
    int x ;
    cout << "Enter your number to find your array :";
    cin >> x;
    int find = 0;
    int arr[6] = { 1,2,3,4,5,6};
    for (int i = 0; i < x; i++) {
        if(arr[i] == x) {
            find = x ;
            break;
        }
    }
    if (find == x) {
            cout << "YES!";
        } else {
            cout << "NO!";
        }
        return 0;
}