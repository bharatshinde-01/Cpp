#include <iostream>
using namespace std;
int main(){
   //  int a , b, c;
   //  cout<<"Enter the three numbers : ";
   //  cin>>a  >>b >>c;
   //   if(a>b){
   //       if (a>c)   {
   //          cout<<a <<"   \nThis number is grestest";   
   //       }
   //       else {
   //          cout<<c <<"   This is greateast number";
   //       }
   //   }
   //   else {
   //      if(b>c){
   //                cout<<b <<"   This number is greatest";
   //      }
   //      else{
   //              cout<<c <<"   This number is great";
   //      }
   //   }
                     int ram, sham, ajay;
                     cout<<"Ener the ram's Age :";
                     cin>>ram;
                     cout<<"Enter the sham's Age :";
                     cin>>sham;
                     cout<<"Enter the ajay's Age :";
                     cin>>ajay;
                     if(ram>sham) {
                        if(ram>ajay) {
                        cout<<ram <<"  Ram is youngest of three";
                        }
                        else{
                           cout<<ajay <<"  Ajay is youngest of three";
                        }
                     }
                     else{
                        if(sham > ajay){
                           cout<<sham <<"  Sham is youngest of threee ";
                        }
                        else{
                           cout<<ajay <<"  Ajay is youngest of thr";
                        }
                     }
}