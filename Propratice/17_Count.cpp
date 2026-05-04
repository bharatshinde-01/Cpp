// Write a C++ program to read the contents of a text file. Count and display number of
// characters, words, lines and blank spaces from a file. Find the number of occurrences of a given
// word present in a file.

#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main() {
    int words = 0 , lines = 0 , chars = 0 , spaces = 0;
ifstream file ("test.txt");
    char word;
    while (file >> word){
        words++;
    }
    file.close();
    file.open("test.txt");
    char ch;
   while(file.get(ch)){
    chars++;
    if(ch ==' ') spaces++;
    if(ch == '\n') lines++;
   }
   file.close();
   cout << "Words :"<<words <<endl;
   cout << "Characters : "<<chars <<endl;
   cout << "Lines :"<<lines <<endl;
   cout << "Spaces :"<<spaces ; 
    return 0;
}
