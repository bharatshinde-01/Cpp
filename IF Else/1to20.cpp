#include <bits/stdc++.h>
using namespace std;

int main() {
    int n  = 1;
    for( int i = 1; i <= 20 ; i++){
    if(n <= 20){
        cout << n <<"  ";
        n++;
    }
    else{
        cout << "Number is gretar than 20!";
    }
    }
    return 0;
}