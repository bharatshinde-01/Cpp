#include <bits/stdc++.h>
using namespace std;
class Car {
    public:
    string name;
    int price;
    int seats;
    int hp;
};

void display(Car c) { // Printing Car details using fuction
                    // this is pass by value's 
    cout << c.name<<"   " << c.price <<"   " <<c.seats<<"   " <<c.hp;
}

void change(Car& x) { // this is change Details of Car because this passed by reference 
                    // using & 
    x.name = " BMW M4";
}
int main() {
    Car c;
    c.name = " Bmw";
    c.price = 10000000;
    c.seats = 4;
    c.hp = 1000;

    display(c); // Printing Details 

    change (c); // Change Details 
    cout<<endl;

    display(c);
    return 0;
}