#include <bits/stdc++.h>
using namespace std;
class Person {
    public:
    string name;
    int age;
    string male;
    Person(string name, int age , string male){

        this->name = name;  // this-> hya mule aapn original varibales che nav use karu shakto 
        this->age = age;     // tya mule garbage value yet nahi original var chi value print hoti
        this->male = male;
    }
};
int main() {
    Person p1(" Bharat " , 20 , " male ");
    Person p2(" Rushi  ",    23 , " male ");
    cout<<p1.name<<"  " <<p1.age <<"  " <<p1.male <<endl;
    cout<<p2.name<<"  " <<p2.age <<"  " <<p2.male <<endl;
    return 0;
}