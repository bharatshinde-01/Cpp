// Q1. Design a base class Product(Product_Id, Product_Name, Price). Derive a class Discount
// (Discount_In_Percentage) from Product. A customer buys ‘n’ products. Write a C++ program
// to calculate total price, total discoun
#include <bits/stdc++.h>
using namespace std;
class Product {
public:
    int id;
    char ch[50];
    float pric;
    void Details() {
        cout << "Enter Product id :";
        cin>>id;
        cout << "Enter Product name :";
        cin >> ch;
        cout << "Enter Product Price :";
        cin>>pric;
    }
};
class Deriv : public  Product {
public:
    float dis;
    void Dis() {
        cout << "Enter Discoutn of Product price :";
        cin>>dis;
    }
    int Caldis() {
       return pric * dis / 100; 
    }
};
int main() {
    int n;
    cout << "Enter number of product's :";
    cin>>n;
    Deriv d[n];
    for (int i = 0; i < n; i++) {
        d[i].Details();
        d[i].Dis();
    }
    float total= 0, totaldis = 0;
    for (int j = 0; j < n; j++) {
        total = total + d[j].pric;
        totaldis = totaldis + d[j].Caldis();

       

    }
      cout << "Total Price    : " << total<<endl;
    cout << "\nTotal Discount : " << totaldis<<endl;
    cout << "\nFinal Price    : " << total - totaldis<<endl;
    return 0;
}