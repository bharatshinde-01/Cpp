#include <bits/stdc++.h>
using namespace std;

int main() {
    int num1, num2;
    char ch ;
    cout << "Enter the 1st number :";
    cin >> num1;
    cout << "Enter the 2nd number :";
    cin >> num2;
    cout << "Enter the operaction perform on it ( + , - , * , /) :";
    cin >> ch;
    switch(ch){
        case '+':
        cout << "Sum of two number's is this :"<<num1+num2;
        break;
        case '-':
        cout << "Sub of two number's is this :"<<num1-num2;
        break;
        case '*':
        cout << "Multipal of two number's is this :"<<num1*num2;
        break;
         case '/' :
         if( num2 == 0){
            cout << "Not divisal by 0";
         }
         cout << " Division of two number is thsi :"<<(float) num1 / num2;
         break;
         default :
         cout << "Invalid character !";
    }
    return 0;
}