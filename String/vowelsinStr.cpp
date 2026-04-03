#include <bits/stdc++.h>
using namespace std;

int main() {
    int count = 0;
    string str = "Hello Bharat how are you ! You are checking in string's vovels";
    for (int i = 0; i < str.length(); i++) {
        if( str[i] == 'a' || str[i]=='e' || str[i]== 'i'|| str[i]=='o'|| str[i]=='u'){
            count ++;
        }
    }
    cout << " Total vowel's + "<<count;
    return 0;
}