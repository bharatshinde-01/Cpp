#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
    int n ;
    cout << "Enter the n numbers ;";
    cin >> n;
    // Step 1 — Dono files kholo
    ofstream pos, neg;
    pos.open("Positive.txt");
    neg.open("Negative.txt");
    
    // Step 2 — Loop chalao
    for(int i = 1; i < argc; i++) {
        int num = atoi(argv[i]);  // string → int
        
        if(num > 0) {
            pos << num << endl;  // Positive file mein likho
        } else {
            neg << num << endl;  // Negative file mein likho
        }
    }
    
    // Step 3 — Files band karo
    pos.close();
    neg.close();
    
    cout << "Done! Files ban gayi!" << endl;
    return 0;
}