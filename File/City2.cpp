// Create a C++ class ‘city’ with data members name and STD code. Accept ‘n’ cities with
// STD codes from user. Store this data in the file ‘cities.txt’. Write a program that reads the data
// from file cities.txt and display it
#include <bits/stdc++.h>
#include <fstream>
using namespace std;
class City {
public:
char name[50];
int st;
    City(){}
    void Getdata(){
        cout << "Enter City name :";
        cin >> name;
        cout << "Enter STD code :";
        cin >> st;
    }
    void Write(ofstream &file) {
        file <<name<< "   ";
        file <<st <<endl;
    }
    void Save(ifstream &file){
        file >> name ;
        file >>st;
    }
};
int main() {
    int n;
    cout << "Enter the numbers of cities :";
    cin >> n;
    City c[n];
    ofstream wfile ("City2.txt");

    for (int i = 0; i < n; i++) {
    c[i].Getdata();
    c[i].Write(wfile);    
    }
    wfile.close();
    ifstream rfile("City2.txt");
    for (int i = 0; i < n; i++) {
        c[i].Save(rfile);
        cout<< c[i].name <<"   " <<c[i].st <<endl;
    }
    rfile.close();
    return 0;
}