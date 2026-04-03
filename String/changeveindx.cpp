#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter the string :";
    getline(cin,str);
    for (int i = 0; i <str.length(); i++) {
        if(i %2 == 0) {
            str[i] = 'A';
        }
    }
    cout << "change even index character's in A :"<<str;
    return 0;
}