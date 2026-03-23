// #include <iostream>
// using namespace std; 
// int main () {
//     int   r ;
//     float area ;
//     cout <<" Enter r :";
//     cin >> r;
//      float circumference = 2 * 3.14 * r ;
//     area = 3.14 * r *r ;
//     cout << "AREA :" << area <<" \n " ;
//     cout << "CIRCUMFERENCE :" << circumference ;
// }
#include <iostream>
#include <iomanip>
using namespace std;

class Circle
{
    float radius;

public:
    void setRadius(float r = 5);   // default argument (agar value na mile to 5)
    void display();
};

void Circle::setRadius(float r)  
// scope resolution operator (::) use ho raha hai
{
    radius = r;  
    // radius set kar rahe hain
}

void Circle::display()
{
    float area = 3.14 * radius * radius;        // area formula
    float circumference = 2 * 3.14 * radius;    // circumference formula

    cout << fixed << setprecision(2);  
    // manipulators → 2 decimal tak value dikhane ke liye

    cout << "Radius = " << radius << endl;
    cout << "Area = " << area << endl;
    cout << "Circumference = " << circumference << endl;
}

int main()
{
    Circle c;

    c.setRadius();  
    // yaha koi value nahi di → default argument 5 use hoga

    c.display();

    return 0;
}
