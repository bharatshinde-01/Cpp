// Write a C++ program to calculate area of cone, sphere and circle by using function
// overloading. 
#include <bits/stdc++.h>
using namespace std;
float pi = 3.14;
class Circle{
    public:
    float r;
    Circle(float ra){
        r = ra;
    }
    float area() {
        // cout<<"Area of circle is :";
        return pi * r * r;
    }
    float area(float r , float h){
        // cout << "Area of cone is :";
        return pi* r * (r+h);
    }
    float area(double r) {
        // cout << "Sphere of circle is :";
        return 4 * pi * r * r;
    }
};
int main() {
    
    float r , h;
    cout << "Enter radius :";
    cin>>r;
    cout<<"Enter hight of cone :   ";
    cin>>h;
    Circle C(r);
    C.area(r);
    C.area(r,h);
    C.area(r);
    cout << "Area of circle is :"<<C.area()<<endl;
    cout << "Area of cone is :"<<C.area(r,h)<<endl;
    cout<<"Sphere is this :"<<C.area(r)<<endl;
    return 0;
}