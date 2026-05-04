// Write a C++ program to find maximum & minimum of two integer numbers and two float
// numbers by using function template. 

#include <bits/stdc++.h>
using namespace std;
template <typename T>
T maxNum(T a , T b){
    if( a > b){
    cout<<" Max num is : " <<a;
    return a;
    }
    else {
        cout<<" Max num is " <<b;
        return b;
    }
   
}
template <typename T>
T minNum ( T a , T b){
    if(a > b ){
        cout<<"Min number is :"<<b<<endl;
        return b;
    }
    else if(a < b){
        cout<<" Min number is :"<<a<<endl;
        return a;
    }
    else {
        cout << "Equal numbers !"<<endl;
    }
}
int main() {
    int a ; 
    int b;
    cout<<"Enter 1st number :"<<endl;
    cin>>a;
    cout << "Enter 2nd number :"<<endl;
    cin >> b;
    maxNum(a,b);
    minNum(a,b);
    return 0;
}