#include <iostream>
using namespace std;

int main()
{
    int n = 3;

    for(int i = 1; i <= n; i++)   // rows
    {
        for(int s = 1; s < i; s++)  
        {
            cout << " ";   // spaces for center
        }

        for(int j = i; j <= n; j++)
        {
            cout << "* ";   // stars print
        }

        cout << endl;
    }

    return 0;
}
