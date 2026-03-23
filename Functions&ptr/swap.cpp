#include <iostream>
using namespace std;
int main() {
    
         int x = 5; 
         int y = 2;
         cout<<x <<" " <<y <<endl;
        //  int temp;
        //  temp = x;
        //  x = y; 
        //  y = temp;
        //  cout<< x << " "<< y;
        x = x + y;
        y = x -y;
        x = x - y;
        cout<<x << " " << y;
}