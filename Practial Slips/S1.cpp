#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the 1st number :";
    cin >> n;
    int n2;
    cout << "Enter the 2nd number :";
    cin >> n2;
    char ch;
    
    cout << "Enter the operator ( + , - , * , /) :";
    cin >> ch;
    switch (ch) {
        case '+':{
            cout << "Sum of two num is :"<<n+n2;
            break;
        }
        case '-':{
            cout << "Substact of two num is :"<<n - n2;
            break;
        }
        case '*':{
            cout << "Multipal of two num is :"<<n * n2;
            break;
        }
        case '/':{
            if( n2 != 0)
            cout << "Div of two num is :"<<(float) n / n2;
        else {
            cout << "This number is not divisibal by 0 !";
        }
        break;
        }
        default :
            cout << " Invaliad operator !";
            break;
        
    }
    return 0;
}