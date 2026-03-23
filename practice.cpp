// fibonecci series program ....!
#include <iostream>
using namespace std;
int main(){
    int n, a = 1, b =1,c;
    cout<<"Enter the N number :";
    cin >>n;
    cout<< a <<" " <<b ;
    for ( int i =3; i<=n; i++){
        c = a + b;
        cout<<" " << c;
      a = b; 
       b = c;
        }
    return 0;
}

// #include <iostream>
// using namespace std;
// int main(){
//     int n ,r;
//     int a =1, b =1, c =1;
//     cout<<"Entert the 1st number :";
//     cin>>n;
//     cout<<"Enter the 2nd number : ";
//     cin>>r;
//     int m = n, s = r;
//     for( int i =1 ; i<= n; i++){
//         a = a * i;
//     }
//     cout<<" fact Of R Num :"<<a <<endl;
//     for ( int j =1; j <= r; j++){
//         b = b * j;
//     }
//     cout<<" fact of N Num :" << b <<endl;
//     for ( int l = 1; l <= m-s; l++){
//         c = c * l;
//     }
//     cout<<" fact of R - N num :" << c <<endl;
//     cout<<" Combantion Num is :" <<a / ( b *c);

//     int star;
//     cout<<" Enter the star :";
//     cin >>star;
//     for ( int i =1 ; i<= star; i++){
//         for( int j =1; j <=i ; j++){
//             cout<<star / ( i * j) <<" ";
//         }
//         cout<<endl;
//     }
//     return 0;

// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n, m;
//     int a =1, b =1;
//     cout<<" Enter the N number :";
//     cin >>n;
//     cout<<" Enter the M number :";
//     cin >>m;
//     for ( int i= 1 ; i <= n; i++){
//         a = a * i;
//     }
//     cout<<" fact  Number :" << a <<endl;
//     for ( int j =1; j <= n -m; j++){
//         b = b * j;
//     }
//     cout<<" fact Number : " <<b <<endl;
//     cout<<" permutation Number is :" << a / b;
// }