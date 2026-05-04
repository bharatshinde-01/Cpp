// . Write a C++ program to accept ‘n’ numbers from user through Command Line Argument.
// Store all positive and negative numbers in file “Positive.txt” and “Negative.txt” respectively

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, num;
    cout << "Enter how much numbers you have pos or neg  :";
    cin >> n;
    ofstream pos ("pos.txt");
    ofstream neg ("neg.txt");
    cout << "Enter your numbers :";
    for (int i = 0; i < n; i++) {
        cin>>num;
        if( num > 0){
            pos << num <<endl;
        }
        else {
            neg << num <<endl;
        }
    }
    pos.close();
    cout << "Positive numbers save in file pos.txt"<<endl;
    cout << "Negative numbers save in file neg.txt"<<endl;
    neg.close();

    return 0;
}