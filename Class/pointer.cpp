#include <bits/stdc++.h>
using namespace std;
class Collage {
public:
    string name;
    int students;
    int id;
    Collage ( string n, int s, int i){
        name = n;
        students = s;
        id = i;
    }
    void display() {
        cout<<name <<"  " <<students <<"  " <<id<<endl;
        
    }
};
    void change(Collage* c) {
        (*c).name="mc";
    }
int main() {
    Collage c("Chutiya", 500 , 12);
    Collage * p1(&c);
    p1-> name = "gandu";
    c.display();
    change(&c);
    c.display();
    return 0;
}