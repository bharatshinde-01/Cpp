#include <iostream>
using namespace std;
int main(){
        int a,b,c;
        cout<<"Enter the A number :";
        cin>>a; 
        cout<<"\n Enter the B number :" ;
        cin>>b;
        cout<<"\n Enter the C number :"  ;
        cin>>c;
        if(a>b && a>b) {
            cout<<a <<"   A is Greatest number of  3 num";
        } 
             else if (b>a && b>c){
                cout<<b <<"   B is Greatest num of 3 num";
            }
                else {
                    cout<<c <<"   C is Greatest num of 3 num";
                }
}