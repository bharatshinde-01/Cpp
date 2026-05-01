// . Write a C++ program to calculate area of cone, sphere and circle by using function
// overloading. 
#include <bits/stdc++.h>
using namespace std;
 float area (float r ){
    return 3.14 * r * r;
 }
 float area ( float r , float h, int k){
    return 3.14 * r * ( r + h);
 }
 float area ( float r , float s){
    return 4 * 3.14 * r * r;
 }
int main() {
    float r , h;
    cout << "Enter radius of circle :";
    cin >> r;
    cout << "Enter hight of cone area :";
    cin >> h;
    cout << "Area of Circle :"<<area(r)<<endl;
    cout << "Area of Cone : "<<area ( r,h,0)<<endl;
    cout << "Area of sphere :"<<area (r, 0)<<endl;
    return 0;
}