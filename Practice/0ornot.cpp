// #include <iostream>
// using namespace std;
// int yesno(int n) {
//     if( n == 0) return 0;
//     int d = n % 10;
//     if( d == 0) {
//         cout<<"Yes";
//         n = n /10;
//         return d ;
//     }
//      else{ 
//         cout<<"no";
//     return yesno(n /10);
// }

// }
// int main() {
//     int n;
//     cout << "Enter the n number's :";
//     cin >> n;
//     yesno(n);
//     return 0;
// }
#include <iostream>
using namespace std;

int yesno(int n) {
    if(n == 0) return 0;
    
    int d = n % 10;

    if(d == 5){
   
        return 1 + yesno(n /10);
    }
    return yesno(n / 10);
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << ""<<yesno(n);
    // if(yesno(n))
    //     cout << "Yes";
    // else
    //     cout << "No";

    return 0;
}