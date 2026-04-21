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
        (*c).name="mc"; // use for (*c) or c->
    }
int main() {
    Collage c("Chutiya", 500 , 12);
    Collage * p1(&c); // Store object address 
                      // If u can store add then u can access all if u wnat to change any thisng
   
    p1-> name = "gandu"; // -> or (*p1);

    c.display();

    change(&c);
    c.display();
    return 0;
}