#include <iostream>
using namespace std;
    int sumofdig(int n) {
        int sum = 0;
        while (n != 0) {
            int dig = n % 10;
            sum = sum + dig;
            n =n /10;
        }
        return sum;
    }
int main() {
    int n;
    cout << "Enter the n number ";
    cin >> n;
    int count = sumofdig(n);
    cout << "The count of digits is "<<count;
    return 0;
}