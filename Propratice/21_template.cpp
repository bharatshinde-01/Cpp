// Write C++ template program to find the area of circle & rectangle with different data types.

#include <bits/stdc++.h>
using namespace std;
template <typename T>
T areaC(T a ){
    return (T)3.14 * a * a;
}
template <typename T>
T areaR( T a , T b){
    return a * b;
}
int main() {
    cout<<"Area of circle is :  "<<areaC(2)<<endl;
    cout<<"Area of Rectangle is : " <<areaR(3,5)<<endl;
    cout<<"Area of circle is :  "<<areaC(3.5)<<endl;
    cout<<"Area of Rectangle is : " <<areaR(3.3, 5.9)<<endl;
    return 0;
}