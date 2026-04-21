#include <bits/stdc++.h>
using namespace std;
class Bharat {
public:
    string name;
    int age;
    float height;
    float wt;
    // Bharat(string name, int age, float height, float wt){
    //     this -> name = name;
    //     this -> age = age ;
    //     this -> height = height;
    //     this -> wt = wt;
    // }
    Getdata(){
        cout << "Enter your name :";
        cin >> name;
        cout<<"Enter you age :";
        cin>>age;
        cout<<"Enter your height :";
        cin>>height;
        cout<<"Enter you weight :";
        cin>>wt;

    }
    Display(){
        cout <<endl << "Your Details "<<endl<<endl;
        cout << "Your name is :"<<name<<endl;
        cout<<"Your age is :"<<age<<endl;
        cout << "Your height is :"<<height<<endl;
        cout << "Your weight is :"<<wt<<endl;
    }
};
int main() {
    Bharat B;
    B.Getdata();
    B.Display();
    return 0;
}