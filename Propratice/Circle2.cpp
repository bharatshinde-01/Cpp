#include <bits/stdc++.h>
using namespace std;
float pi = 3.14;
float area(float r, float s, float m) {
    return pi * r * r;
    
}
float area(float r, float h){
    return pi * r * (r +h);
}
float area(double r ) {
    
    return 4 *  pi * r * r ;
}
int main() {
    cout<<"Area of circle is :"<<area(5,0,0)<<endl;
    cout<<"Area of cone is :"<<area(5,5)<<endl;
    cout << "Sphere is this :"<<area((double)5 )<<endl;
    return 0;
}