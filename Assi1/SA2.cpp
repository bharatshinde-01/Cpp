#include <iostream>
using namespace std;

int main()
{
    int start, end;

    cout << "Enter start and end: ";
    cin >> start >> end;

    for(int num = start; num <= end; num++)
    {
        int temp = num;   // number copy kar rahe hain
        int sum = 0;      // cube ka total yaha store hoga

        while(temp != 0)
        {
            int digit = temp % 10;          // last digit nikal rahe hain
            sum = sum + digit*digit*digit;  // digit ka cube add kar rahe hain
            temp = temp / 10;               // last digit hata rahe hain
        }

        if(sum == num)   // agar sum same hai to Armstrong number
        {
            cout << num << " ";
        }
    }

    return 0;
}

