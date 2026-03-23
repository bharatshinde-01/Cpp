#include <iostream>
using namespace std;

int main() {
   int arr[5];

   for (int i = 0; i <= 4; i++) {
    cout << "Enter the num ";
       cin >> arr[i];
   }
   cout << "Your array numbers is :";
   for (int i = 0; i <= 4; i++) {
       cout<<arr[i]<< " ";
   }
    return 0;
}