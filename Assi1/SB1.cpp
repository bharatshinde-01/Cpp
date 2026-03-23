#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';  
    // ch ek character variable hai jo letters ko track karega.
    // Ye 'A' se start ho raha hai.

    for(int i = 1; i <= 4; i++)  
    // Outer loop rows ke liye hai.
    // i = row number (1 se 4 tak)

    {
        char temp = ch;  
        // temp me current starting letter store kar rahe hain.
        // Ye isliye jaruri hai kyunki reverse printing me ch change hoga.

        for(int j = 1; j <= i; j++)  
        // Ye loop sirf count karta hai ki is row me kitne letters honge.
        // Har row me letters = row number.
        {
            ch++;  
            // ch ko aage badha rahe hain taaki next row ka starting point mil sake.
        }

        if(i % 2 != 0)  
        // Agar row number odd hai (1,3...)
        {
            for(int j = 1; j <= i; j++)  
            {
                cout << temp++ << " ";  
                // temp print ho raha hai.
                // temp++ ka matlab: pehle print karo, phir next letter pe jao.
            }
        }
        else  
        // Agar row number even hai (2,4...)
        {
            for(int j = 1; j <= i; j++)  
            {
                cout << --ch << " ";  
                // --ch ka matlab: pehle ek step piche jao,
                // phir print karo.
                // Isliye reverse order print ho raha hai.
            }
        }

        cout << endl;  
        // Har row ke baad next line me jane ke liye.
    }

    return 0;
}
