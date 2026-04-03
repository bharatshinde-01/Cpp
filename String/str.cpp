#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "Bharat";
    cout << str<<endl;
    string ch;
    cout << "Enter the string :";
    // cin >> ch; // cin ha sapce aala ki ha tith pattor ch 
    // consider karto ki hya chi value aahe 
    getline(cin , ch); // ani ha purna line consider karto 
    // with space 
    cout << "Your string is :"<<ch;
    return 0;
}