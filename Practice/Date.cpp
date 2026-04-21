#include <bits/stdc++.h>
using namespace std;
class Month {
public:
    int dd ;
    int mm;
    int yyy;
    Month( int d , int m , int y){
        dd = d;
        mm = m;
        yyy = y;
    }
    void display() {
       const char* ch[] = {" jan " , " fed " , " mar " ," apr ", " me " , " jun " , " july ",
                    " aug " , " sep " ," oct " , " nov " , " dec " };
            cout<<dd <<" - " <<ch[mm-1] <<" - " <<yyy;
    }
};
int main() {
 
    int d , m , y;
    cout<<" Enter date :" ;
    cin>>d;
    cout<<" Enter mont :";
    cin>>m;
    cout<<" Enter year :";
    cin>>y;
    Month date(d, m, y);
    date.display();
    return 0;
}