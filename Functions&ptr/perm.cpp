// #include <iostream>
// using namespace std;
// int main(){
//     int n, a =1;
//     cout<<" Enter the N number :";
//     cin>>n;
//     int r; 
//     int m = 1;
//     cout<<" Enter the R Number:";
//     cin>>r;
//     if ( r > n) {
//         cout<<" Permution is not possible :";
//         return 0;
//     }
//     for( int i =1; i<=n; i++){
//          a = a *i;
//     }
//     for( int i =1; i<= n- r; i++){
//         m = m *i;
//     }
//     cout<<"permution Num :" << a /m;
    
// }

// #include  <iostream>
// using namespace std;
// int main(){
//     int n, a=1; 
//     cout<<" Enter N :";
//     cin>>n;
//     int m, b =1; 
//     cout<<" Enter M :";
//     cin>>m;
//     for( int i =1; i <= n; i++){
//         a *= i;
//     }
//     for ( int i = 1; i<= n -m; i++){
//         b *=i;
//     }
//     cout<<" Permutation Num :" << a /b;
// }


#include <iostream>
using namespace std;
int perm(int n) {
    int f =1; 
    for ( int i =1; i<=n; i++){
        f *= i;
    }
    return f;
}
int main () {
    int n ,m, a = 1, b = 1;
    cout<<" Enter the N :";
    cin>>n; 
    cout<<" Enter the M :";
    cin>>m;
     a = perm(n);
     b = perm (n -m );
    cout<<" Permutation is :" << a / b;
}

