#include <iostream>
#include <conio.h>
using namespace std;
    int* revarr(int bh[], int n) {
        int temp = 0;
        for (int i = 0; i < n/2; i++) {
            temp = bh[i];
            bh[i] = bh[ n - i -1];
            bh[n - i -1] = temp;
        }
        return bh;
    }
    // void rearr(int bh[] , int n) {
    //     int temp = 0;
    //     for (int i = 0; i < n/2; i++) {
    //         temp = bh[i];
    //         bh[i] = bh[n - i -1];
    //         bh[n - i- 1] = temp;
    //     }
    //     cout << endl<<"Reverse array is :"<<endl;
    //     for (int i = 0; i < n; i++) {
    //         cout << "  "<<bh[i];
    //     }
    // }
int main() {
    int bh[] = { 1,2,3,4,5,6,7};
    int n = 7;
    cout << "Array elements is this :";
    for (int i = 0; i < 7; i++) {
        cout << "  "<<bh[i];
    }
    revarr(bh,n);
    for (int i = 0; i < n; i++) {
        cout << "  "<<bh[i];
    }
    return 0;
    
}