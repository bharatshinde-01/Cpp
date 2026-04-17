#include <bits/stdc++.h>
using namespace std;
class Car {
    public:
    string name ;
    int price ;
    int seats;
    string type ;


    Car (){ // This is defaut Constructor for Car c2 run


    }
                                    // This is a Parameterised construcote 
    Car(string n , int p , int s, string t){ // Constructor is a function that not return any values 
                                            // and this values are Classes 
        name = n; 
        price = p;
        seats = s;
        type = t;
    }
};
void display(Car x) {
    cout<<x.name <<"  " <<x.price<<"  " << x.seats<<"   " <<x.type;
}
void change(Car& x) {
    x.name = "Audi";
    x.seats = 4;
}
int main() {
    Car c1( " BMW " , 30000000, 4, "Royal");
    display(c1);
    cout<<endl;  
    Car c2;
    c2.name = " Lembo";
    c2.price = 1000000;
    c2.seats = 2;
    c2.type = "Primimum";
    display(c2);
    change(c2);
    cout<<endl;
    display(c2);
    return 0;
}