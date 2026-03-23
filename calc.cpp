#include <iostream>
using namespace std;
int main(){
    int a , b;
    char ch;
    cout<<"Enter the A number :";
    cin>>a;
    cout<<"Enter the operation will you perfotm on it : " <<endl;
    cin>>ch;
    cout<<"Enter the B number :" <<endl;
    cin>>b;
    // if(ch=='+') {
    //     cout<<a+b;
    // }
    // else if (ch=='-'){
    //     cout<<endl << a-b;
    // }
    // else if (ch=='*'){
    //     cout<<a*b;
    //     }
    switch (ch) {
        case '+':
        cout <<a+b;
        break;
        case '-':
        cout <<a-b;
        break ;
        case '*':
        cout << a*b;
        break ;
        case '/':
        cout << a/b;
        break;
        default:
        cout << "Invalid operation";
    }

}