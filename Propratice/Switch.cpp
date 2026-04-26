#include <bits/stdc++.h>
using namespace std;

int main() {
    int num1;
    int num2;
    cout << "Enter 1st number :";
    cin >> num1;
    cout << "Enter 2nd number :";
    cin>>num2;
    char ch;
    cout << "Enter operation if you want you perform on it :( + , - , * , / ) :-";
    cin >> ch;
    switch (ch) {
        case '+':

        cout << "Sum of two number's is :"<<num1 + num2 ;
        break;

        case '-':
        cout << "Substraction of two numbes  is :"<<num1 - num2;
        break;

        case '*':
        cout << "Multiplition of two numbers is :"<<num1 * num2;
        break;

        case '/':
        if( num2 == 0) {
            cout << "Zero not divisibal !";
        }
        cout << "Divide of two numbers is :"<<num1 / num2;
        break;

        default :
        cout << "Invalid operator !";
        break;
    }
    return 0;
}