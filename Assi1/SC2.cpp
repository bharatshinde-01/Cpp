
#include <iostream>
using namespace std;

class Book
{
    int stock; float price;
    string title, author;

public:
    void accept(){
        cin.ignore();
        cout<<"Title: "; getline(cin,title);
        cout<<"Author: "; getline(cin,author);
        cout<<"Price Stock: "; cin>>price>>stock;
    }

    void display(){
        cout<<"\n"<<title<<" "<<author<<" "<<price<<" "<<stock<<endl;
    }

    void sell(){
        int q; cout<<"Qty: "; cin>>q;
        if(q<=stock) stock-=q;
        else cout<<"No stock\n";
    }

    void purchase(){
        int q; cout<<"Qty: "; cin>>q;
        stock+=q;
    }
};

int main(){
    Book b; int ch;
    do{
        cout<<"\n1.Accept 2.Display 3.Sell 4.Purchase 5.Exit\n";
        cin>>ch;
        if(ch==1) b.accept();
        else if(ch==2) b.display();
        else if(ch==3) b.sell();
        else if(ch==4) b.purchase();
    }while(ch!=5);
    return 0;
}
