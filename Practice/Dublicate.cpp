// This program counts dublicate numbers 
#include <iostream>
using namespace std;

int main() {
    int n ;
    cout << "Enter the array size :";
    cin >> n;
     int arr[n];
     int count = 0;
     cout << "Enter the array elements :";
     for (int i = 0; i < n; i++) {
         cin >> arr[i];
     }
     cout << "Your array elements is this :";
     for (int j = 0; j < n; j++) {
         cout << "  "<<arr[j];
     }
     
     for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if( arr[i] == arr[j]) {
         count ++;
        break ;
        }
     }
     }
     
     cout << "Dublicate number count is this :"<<count;
    return 0;
}



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the array size: ";
//     cin >> n;

//     int arr[n]; 
//     cout << "Enter the array elements: " << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int count = 0;
//     // Nested loop har element ko check karne ke liye
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 count++;
//                 break; // Ek hi duplicate ko baar baar count na karne ke liye
//             }
//         }
//     }

//     cout << "Duplicate number count is: " << count << endl;
//     return 0;
// }