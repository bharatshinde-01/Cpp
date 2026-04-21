#include <bits/stdc++.h>
using namespace std;
class Cricketer {
public:
    string name;
    int runs;
    float avg;
    Cricketer(string n ,int r , float a){
        name = n;
        runs = r;
        avg = a;
    }
}; 
int main() {
    Cricketer c1 ("Virat", 25000 , 55.4);
    Cricketer * c2 = new Cricketer ("Rohit", 30000 , 60.8);
    cout<<c1.name << "  " <<c1.runs <<"  " <<c1.avg <<endl;
    cout<<c2-> name <<"  " <<c2-> runs <<"  " <<c2->avg;
    return 0;
}