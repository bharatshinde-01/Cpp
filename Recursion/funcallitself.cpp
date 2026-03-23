#include <iostream>
using namespace std;
void print(int n ) {
    cout<<n <<endl; if(n == 0) return;
    print( n -1 );
    // print(3) n chi value 3 gheli mg check keli if chi condn mg n print kel nantr tyne print( n -1)
    //  la call lavla mg int n madhe 2 ghela mg parat check kel parat print kel mg ajun all lavla mg n chi value 1
    //  heli mg check mg print mg ajun call mg chek kel cond true jali mg return ckalnar mg ha jyane call lavla ty kade
    //  janr mg to fun sampnar asach pint(3) pattor chalnar
}
int main () {
    print ( 6);
    
}