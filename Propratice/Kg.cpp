// Create a base class Conversion. Derive class Weight (Gram, Kilogram) from Conversion
// class. Write a C++ program to read, convert and display operations.
 #include <bits/stdc++.h>
 using namespace std;
    class Conversion {
    public:
        float grm;
        float kg;
        Conversion (){}
        void Getdata() {
            cout << "Enter grams :";
            cin >> grm;
        }
        void Convert() {
            kg = grm / 1000;
        }
        void Display() {
            cout << "Grams in Kg :"<<kg<<endl;
        }
    };
    class Kilo {
    public:
        float grm;
        float kg;
        Kilo(){}
        void Getdata() {
            cout << "Enter kilogram's :";
            cin >> kg;
        }
        void Convert() {
            grm = kg * 1000;
        }
        void Display() {
            cout << "Kilo grams in grams :"<<grm<<endl;
        }
    };
 int main() {
     Conversion W;
     W.Getdata();
     W.Convert();
     W.Display();
     Kilo k;
     k.Getdata();
     k.Convert();
     k.Display();
     return 0;
 }