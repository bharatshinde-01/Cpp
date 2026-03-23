// #include <iostream>
// using namespace std;
// void swap(int&  x ,int& y ) {
//    int temp = x;
//    x = y; 
//    y = temp;
//    cout<<endl;
    
// }
// int main () {
//      int n = 20 ;
//      int  m = 3;
//      cout<<n <<m <<endl;
//      swap( n , m);
//      cout<<n <<m;
// }
#include <iostream>
using namespace std;
void swap ( int* a , int* b){   
    int temp = *a; // *a maje tychya madhlya add var ja ani tyat li valude gheun ye manje &x ci value 12 ti  temp = 12 maghe hi valude gheli
   
    *a = *b; // pahilyanda *b ja yenar hya maghe *b ha tyachya madhlya add var jaun tyachi value gheun ye manje ch &y chi value 45 
                // techenecally *a chi value atta 45 jali tychi meaning atta *a madhlya aadd var jaun tychi value cut karun b chi tak
                // manjech x chi value cut karun y chi value tak 12 cut karun 45 
   
                *b = temp; // hya madhe *b madhlya add var ja ani ty madhli value cut karun temp chi value tak majech 
                // y chi value cut karun temp chi tak 

}
int main() {
    int x = 12, y = 45;
    cout<<x <<"  " <<y<< endl;
    swap( &x , &y);
    cout<<x <<"  " <<y;
}
    