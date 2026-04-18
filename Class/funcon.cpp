#include <bits/stdc++.h>
using namespace std;
class Person {
public:
    string name;
    int id;
    int age;
    Person(string name , int id , int g){
        this-> name = name;
        this-> id = id; 
        age = g;
    }
    void display() {
        cout<<name <<"   " << id <<"  "  << age;
    }
};
int main() {
    Person p1("Bhart", 1, 20 );
    p1.display();
    return 0;
}