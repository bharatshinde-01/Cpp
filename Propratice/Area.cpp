// Write C++ template program to find the area of circle & rectangle with different data types.
#include <bits/stdc++.h>
using namespace std;
    template <typename T >
    T Circle( T r ){
        return 3.14 * r * r;
    }
    template <typename T >
    T Rec( T l , T b){
        return l * b ;
    }
int main() {
    float r;
    cout << "Enter radius of circle :";
    cin >> r;
    cout << "Area of circle is :" <<Circle(r)<<endl;
    cout << "Area of circle is :" <<Circle(5)<<endl;
    cout << "Area of Rectangle is :" <<Rec(5,3)<<endl;
    cout << "Area of Rectangle is  :" <<Rec(5.3,3.6)<<endl;
    return 0;
}