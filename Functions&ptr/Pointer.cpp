// #include <iostream>
// using namespace std;
// int main() {
//     int x = 5; 
//     int*p = &x;
//     cout<<&x <<endl;
//     cout<<*p;
// }
#include <iostream>
using namespace std;
void swap( int* n, int* m){
    *n = *n + *m;
    *m = *n- *m;
    *n = *n - *m;

}
int main() {
     int x ;
     cout<<" Enter the X number :";
     cin>>x;
     int y;
        cout<<" Enter the Y number :";
     cin>>y ;
         cout<<x <<" " <<y <<endl <<endl;
     swap ( &x , &y);
     cout<<x <<" " <<y;
     return 0;
        
}