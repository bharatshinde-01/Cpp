// . Design a base class Product(Product_Id, Product_Name, Price). Derive a class Discount
// (Discount_In_Percentage) from Product. A customer buys ‘n’ products. Write a C++ program
// to calculate total price, total discount.
 #include <bits/stdc++.h>
 using namespace std;
    class Product {
    public:
        int id;
        string name;
        float price;
        Product(){}
        Product ( int i, string n, float p){
            this -> id = i;
            this -> name = n;
            this -> price = p;
        }
        void GetPro() {
            cout << "Enter Product id :";
            cin >> id;
            cout << "Enter product name :";
            cin >> name;
            cout << "Enter product price :";
            cin >> price ;
        }
    };
    class Dis : public Product  {
    public:
        float dis;
        void GetDis() {
            cout << "Enter discount :";
            cin >> dis;
        }
        float caldis() {
            return price * dis / 100;
        }
    };
 int main() {
     cout << "Enter number's of product's :";
     int n ;
     cin>>n;
     Dis D[n];
     for (int i = 0; i < n; i++) {
         D[i].GetPro();
         D[i].GetDis();

     }
     float total = 0 , totaldis = 0;
     for (int i = 0; i < n; i++) {
         total = total +D[i].price ;
         totaldis = totaldis + D[i].caldis();
     }
     cout << "total is :"<<total <<endl;
     cout << "totaldis is :"<<totaldis<<endl;
     cout << "Filan price is :"<<total- totaldis;
     return 0;
 }