// Q1. Design a base class Product(Product_Id, Product_Name, Price). Derive a class Discount
// (Discount_In_Percentage) from Product. A customer buys ‘n’ products. Write a C++ program
// to calculate total price, total discoun
#include <bits/stdc++.h>
using namespace std;
class Pro {
public:
    int id;
    string name;
    int price;

    void Details() {
        cout << "Enter pro id :";
        cin >> id;
        cout << "Enter pro name :";
        cin >> name;
        cout << "Enter price :";
        cin >> price;
    }
};
    class Dis : public Pro {
        float dis;
        public:
        void Discount(){ 
        cout << "Enter Discount on pro :";
        cin>>dis;
        }
    int Caldis() {
        // cout << "Discount of product is :";
        return price * dis / 100;
    }
};
int main() {
    int n;
    cout << "Enter num of product's :";
    cin >> n;

    Dis d[n];
    for (int i = 0; i < n; i++) {
        d[i].Details();
        d[i].Discount();

    }
    float tot = 0, totd = 0;
    for (int i = 0; i < n; i++) {
        tot = tot + d[i].price;
        totd = totd + d[i].Caldis();
    }
    cout <<endl<<endl;
    cout << "Total price :"<<tot<<endl;
    cout << "Total dis : "<<totd<<endl;
    cout << "Final price is :"<<tot - totd;
    return 0;
}