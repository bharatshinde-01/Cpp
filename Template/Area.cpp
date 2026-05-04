// Write C++ template program to find the area of circle & rectangle with different data types.

#include <bits/stdc++.h>
using namespace std;
template <typename T>
T areaC(T a){
    return 3.14 * a * a;
}
template <typename T>
T areaR(T l , T b){
    return l * b;
}
int main() {
    cout<<" Area of Circle is :" <<areaC(5) <<endl;
    cout<<" Area of Circle is :" <<areaC(5.5) <<endl;
    cout<<" Area of Rectangle is :" <<areaR(5,10) <<endl;
    cout<<" Area of Rectangle is :" <<areaR(5.4,7.3) <<endl;
    return 0;
}