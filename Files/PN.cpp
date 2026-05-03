#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cout << "Enter array size :";
    cin >> m;
    int n[m];
    cout << "Enter the array elements  :";
    for (int j = 0; j < m; j++) {
        cin >> n[j];
    }
    ofstream pos , neg; 
    pos.open("pos.txt");
    neg.open("neg.txt");
    
        for (int i = 0; i < m; i++) {
            if(n[i] > 0){
                pos<<n[i]<<endl;
            }
            else {
                neg<<n[i]<<endl;
            }
        }
    
    pos.close();
    neg.close();
    cout << "Hello ";
    return 0;
}