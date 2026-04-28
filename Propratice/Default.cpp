#include <bits/stdc++.h>
using namespace std;
float Circle(int r =5) {
    
    return 3.14 * r * r;
}
float Cir ( int r = 5){
    return 2 * 3.14 * r;
}
int main() {
    cout << "Area is this :"<<setw(8)<< :: Circle()<<endl;
    cout << "Crcumferencece :"<<setw(6)<<  :: Cir();

    cout << endl;
    cout << "User difinded data types :"<<endl;
    cout << "Enter radius :";
    float m;
    cin>>m;
    int r = m;
    cout << "Area is :"<<Circle(r)<<endl;
    cout << "Crcumference is this :"<<Cir(m);
    return 0;
}