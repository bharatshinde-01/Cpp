// Write a C++ program to calculate area of cone, sphere and circle by using function
// overloading. 

#include <bits/stdc++.h>
using namespace std;
 float area( float r){
    return 3.14 * r * r;
 }
 float area(float r , float h){
    return 3.14 * r * ( r + h);
 }
 float area(float r , int n, int s){
    return 4 * 3.14 * r * r ;
 }
int main() {
    cout << "Area of circle is :"<<area(2)<<endl;
    cout<<"Area of cone is :" <<area(2,5)<<endl;
    cout<<"Sphere  is : " <<area ( 2,0 , 0 )<<endl;
    return 0;
}