#include <iostream> 
using namespace std;
int main () {
    int n , m ;
    cout << "Enter the first number :";
    cin >> n;
    char ch;
    cout <<" Enter the operator you want to perform :  ";
    cin >> ch ;
    cout << " Enter the second number : " ;
    cin >> m;
    
    switch (ch ) {
        case '+' :
            cout << " The sum is :" <<n + m ;
            break ;
            case '-' :
            cout << " The difference is : " << n - m;
            break ;
            case '*' :
            cout <<" The multiple is :" << n * m;
            break;
            cout <<" The divide id : " << n / m ;
            break ;
            default :
            cout << " Invalid operator";
    }
}