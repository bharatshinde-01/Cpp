// Design a base class Product(Product_Id, Product_Name, Price). Derive a class Discount
// (Discount_In_Percentage) from Product. A customer buys ‘n’ products. Write a C++ program
// to calculate total price, total discount.

#include <bits/stdc++.h>
using namespace std;
    class Product {
    public:
        int id;
        string name;
        int price;
        Product(){}
        void Getdata() {
            cout << "Enter id :";
            cin >> id;
            cout << "Enter your prod name :";
            cin >> name;
            cout << "Enter your prod price :";
            cin >> price;
        }
        void DisProd(){
            cout << "id :"<<id <<endl;
            cout << "Name :"<<name <<endl;
            cout << "Price :"<<price <<endl;
        }
    };
    class Discount: public Product {
    public:
        float dis;
        Discount(){}
        void GetDis() {
            cout << "Enter discount in your prod :";
            cin >> dis;
        }
       float calculate(){
        return price * dis / 100;
       }
    };
int main() {
    int n;
    cout << "Enter number of prod :";
    cin >> n;
    Discount d[n];
    for (int i = 0; i < n; i++) {
        d[i].Getdata();
        d[i].GetDis();
    }
    float total = 0 , totalDis = 0;
    for (int i = 0; i < n; i++) {
        total = total + d[i].price ;
        totalDis = totalDis + d[i].calculate();
    }
    cout << "Total price :"<<total <<endl;
    cout << "Total discount :"<<totalDis<<endl;
    cout << "Final Price :"<<total - totalDis <<endl;
    return 0;
}