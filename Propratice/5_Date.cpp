// Write a C++ program to create a class MyDate with three data members as dd, mm, yyyy.
// Create and initialize the object by using parameterized constructor and display date in dd- monyyyy format. (Input: 19-12-2014 Output: 19-Dec-2014). (Use the concept of dynamic
// initialization of object)

#include <bits/stdc++.h>
using namespace std;
    class MyDate {
    public:
        int dd;
        int mm;
        int yyyy;
        MyDate( int d , int m , int y){
            dd = d;
            mm = m;
            yyyy = y;
        }
        void Date() {
            const char* ch [] = {"jan","fed"};
        
        cout << dd <<"-"<<ch[mm-1]<<"-"<<yyyy<<endl;
        }
    };
int main() {
    MyDate d(3,1,2006);
    d.Date();
    return 0;
}