#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "Bharat";
    int n = str.length(); // str.size() ; ha pan use karu shakto
    cout << "Your string befroe reverse :"<<str<<endl;

    cout << "After Half Reverse String is this :";
      
    int i = 0 , j = n/2 -1;

    // Using build in functio is 
    
    // reverse(str.begin(), str.begin()+3); 
     
    while (i < j) {
        char temp = str[i];   // char hya mule ki aapn character reverse karat aahot na number
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
    cout << str <<""<<endl;
    return 0;
}