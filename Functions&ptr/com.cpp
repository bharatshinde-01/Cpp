// #include <iostream>
// using namespace std;
// int main (){
//     long long a,e=1;
// cout<<"Enter the number :";
// cin>>a;
// for(int i= 1; i<=a; i++){
//     e = e *i;
    
// }
// // cout<<"Factorial of A is :" <<e<<endl;
// long long b, g= 1;
// cout<<" Enter the B Number :";
// cin>>b;
// for( int i = 1; i<= b; i++){
//     g = g *i;
// }
// // cout<<" Factorial of B is :" <<g<<endl;

// long long c=1; 

// for( int i =1 ; i<= a -b; i++){
//     c = c * i;
// }
// cout<<" Combanation of Number is  :"<<e/ (g *c);
// return 0;
// }

// #include <iostream>
// using namespace std;
// int fact( int n) {
//     int f = 1;
//     for( int i = 1; i <=n; i++) {
//         f = f *i;
//     }
//     return f;
// }
// int main() {
//     long long e;
//     cout<<"Enter the  E:";
//     cin >>e;
//     long long g;
//     cout<<" Enter the G :";
//     cin>> g;
//     int a = fact(e);
//     int b = fact(g);
//     int c = fact(e -g);
//     cout<<"Combnation Number "<<a / ( b *c );
// }

#include <iostream>
using namespace std;
int fact(int n) {
    int f = 1;
    for ( int i =1 ; i <= n; i++){
        f = f * i;
    }
    return f;
}
int main() {
    int n ;
    cout<<" Enter the N number : ";
    int m; 
    
    cin >> n;
    cout<<" Enter the M number ";
    cin>>m;
    int a = fact(n);
    int b = fact(m);
    int c = fact(n -m);
    cout<<"Combanation N :" << a / ( b * c);
}
