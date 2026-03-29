// #include <cmath>
// #include <iostream>

// using namespace std;

// int main() {
//    int num, originalNum, remainder, n = 0, result = 0, power;
//    cout << "Enter an integer: ";
//    cin >> num;

//    originalNum = num;

//    while (originalNum != 0) {
//       originalNum /= 10;
//       ++n;
//    }
//    originalNum = num;

//    while (originalNum != 0) {
//       remainder = originalNum % 10;

//       // pow() returns a double value
//       // round() returns the equivalent int
//       power = round(pow(remainder, n));
//       result += power;
//       originalNum /= 10;
//    }

//    if (result == num)
//       cout << num << " is an Armstrong number.";
//    else
//       cout << num << " is not an Armstrong number.";
//    return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n , m , sum = 0, temp;
    cout << "Enter the number to check is armstrong or not :";
    cin >> n;
    temp = n;
    while (n > 0) {
        m = n % 10;
        sum = sum + ( m * m * m);
        n = n / 10 ;
    }
    if (sum == temp) {
        cout << "Yes! this is a armstrong number :"<<sum;
    } else {
        cout << "NO! this is not a armstrong number ";
    }
    return 0;
}