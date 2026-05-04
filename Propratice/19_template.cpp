// Write a C++ program to find maximum & minimum of two integer numbers and two float
// numbers by using function template. 

#include <bits/stdc++.h>
using namespace std;
    template <typename T>
    T maxNum(T a , T b){
        if( a > b){
            return a;
        }
        else {
            return b;
        }
    }
    template <typename T>
    T minNum(T a , T b){
        if( a > b ){
            return b;
        }
        else {
            return a;
        }
    }
int main() {
    cout << "Max numbers is :"<<maxNum(5,3)<<endl;
    cout << "Min numbers is :"<<minNum(5,3);
    return 0;
}