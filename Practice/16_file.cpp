// . Write a C++ program to accept ‘n’ numbers from user through Command Line Argument.
// Store all positive and negative numbers in file “Positive.txt” and “Negative.txt” respectively.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter numbers size :";
    cin >> n;
    int nums;
    cout << "Enter all numbers to check positive or negative :";
    ofstream posfile("1_pos.txt");
    ofstream negfile("2_neg.txt");
    for (int i = 0; i < n; i++) {
        cin>>nums;
        if( nums > 0){
            posfile << nums;
        }
        else{
            negfile <<nums;
        }
    }

    
    
        
    
    posfile.close();
    negfile.close();
    return 0;
}