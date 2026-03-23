#include <iostream>
using namespace std;

void modify(int &x)  
// &x matlab reference, yaha original variable change hoga
{
    x = x + 10;  
    // yaha value modify ho rahi hai
}

int main()
{
    int num;

    cout << "Enter number: ";
    cin >> num;

    modify(num);  
    // function call, original num pass ho raha hai

    cout << "Modified number = " << num;

    return 0;
}
