#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the n number :";
    cin >> n;
    int b = 0;
    for (int i = 1; i <= n; i++) {
     b = b +i;
    }

    cout << " The sum of N number : "<<b;
    return 0;
}