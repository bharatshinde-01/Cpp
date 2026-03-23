#include <iostream>
using namespace std;

int main()
{
    int n;
    int binary[32];   // binary digits store karne ke liye array
    int i = 0;

    cout << "Enter decimal number: ";
    cin >> n;

    while(n > 0)
    {
        binary[i] = n % 2;   // remainder store ho raha hai
        n = n / 2;           // number divide ho raha hai
        i++;
    }

    cout << "Binary number: ";

    for(int j = i - 1; j >= 0; j--)  
    {
        cout << binary[j];   // reverse order me print kar rahe hain
    }

    return 0;
}
