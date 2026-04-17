#include <bits/stdc++.h>
using namespace std;
class Emp{
    public:
    string name;
    int id;
    int salary;
    int workday;
    Emp(){
    
    }
    Emp (string n , int i){
        name = n; 
        id = i;
    }
    Emp ( int d , int y , int a){
        id = d;
        salary = y;
        workday = a;
    }
};
void display(Emp e) {
    cout<<e.name <<"  " <<e.id <<"   " <<e.salary <<"   " <<e.workday;
}
int main() {
    Emp E1;
    E1.name = "Bharat";
    E1.id = 1;
    E1.salary = 10000;
    E1.workday = 30;
   
    display(E1);
    cout<<endl;


    Emp E2("Rushi", 2);
    E2.salary = 5000;
    E2.workday = 15;
    display(E2);
    cout<<endl;

    Emp E3(3,20000,60);
    E3.name = "Rohan";
    display(E3);
    return 0;
}