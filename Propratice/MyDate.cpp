// . Write a C++ program to create a class MyDate with three data members as dd, mm, yyyy.
// Create and initialize the object by using parameterized constructor and display date in dd- monyyyy format. (Input: 19-12-2014 Output: 19-Dec-2014). (Use the concept of dynamic
// initialization of object)
#include <bits/stdc++.h>
using namespace std;
    class MyDate {
  
        int dd ;
        int mm;
        int yyyy;
          public:
        MyDate(int d ,int m , int y){
            dd =d ;
            mm = m;
            yyyy = y;
        }
        void Date() {
            const char *montha[] = {"jan", "feb" , "mar", "apr", "may","jun","july","aug","sep","oct","nov","dic"};
            cout <<dd <<"-" <<montha[mm -1]<<"-"<<yyyy;
        }
    };
int main() {
    int d , m , y;
    cout << "Enter date :";
    cin >> d;
    cout << "Enter month :";
    cin >> m;
    cout << "Enter year :";
    cin >> y;
    MyDate M(d , m , y);
    M.Date();
    return 0;
}