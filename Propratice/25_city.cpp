// Create a C++ class ‘city’ with data members name and STD code. Accept ‘n’ cities with
// STD codes from user. Store this data in the file ‘cities.txt’. Write a program that reads the data
// from file cities.txt and display it

#include <bits/stdc++.h>
using namespace std;
class City {
public:
    string name , std;
    City(){}
    void Getdata() {
        cout << "Enter city name :";
        cin >> name;
        cout << "Enter Std cone :";
        cin >> std;
    }
    void Write(ofstream &file) {
        file <<name << "  " ;
        file << std << endl;
    }
    void Read(ifstream &file) {
        file >> name;
        file >> std;
    }
};
int main() {
    int n;
    cout << "Enter number of cities :";
    cin >> n;
    City c[n];
    ofstream wfile("C.txt");
    for (int i = 0; i < n; i++) {
        c[i].Getdata();
        c[i].Write(wfile);
    }
    wfile.close();
    
    ifstream rfile("C.txt");
    for (int i = 0; i < n; i++) {
        c[i].Read(rfile);
        cout << c[i].name <<"  " <<c[i].std;
    }
    rfile.close();
    return 0;
}