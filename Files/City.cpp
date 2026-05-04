// Create a C++ class ‘city’ with data members name and STD code. Accept ‘n’ cities with
// STD codes from user. Store this data in the file ‘cities.txt’. Write a program that reads the data
// from file cities.txt and display it


#include <bits/stdc++.h>
using namespace std;
    class City {
    public:
        char name[50];
        char std[10];
        City(){}
        void Get() {
            cout << "Enter City's name  :";
            cin.getline(name,50);
            cout << "Enter your std code :";
            cin.getline(std,10);
          
        }
        void Write(ofstream &file) {
            
            file<< name << "  " ;
            file << std <<endl;
            
        }
        void Read(ifstream &file ) {
           
            file >> name;
            file >> std;
            
        }
    };
int main() {
    
    int n ;
    cout << "Enter numbers of Cities : ";
    cin >> n;
    cin.ignore();

    City c[n];
    ofstream writefile("City.txt");

    for (int i = 0; i < n; i++) {
        c[i].Get();
        c[i].Write(writefile);
        
    }
    writefile.close();
    ifstream readfile("City.txt");
    for (int i = 0; i < n; i++) {
        c[i].Read(readfile);
        cout << c[i].name <<"  " << c[i].std << endl;
    }
    return 0;
}