// Write a C++ program to read the contents of a text file. Count and display number of
// characters, words, lines and blank spaces from a file. Find the number of occurrences of a given
// word present in a file.

#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main() {
    int words = 0 ,chars= 0 , space= 0 , lines= 0;
    string word;
    ifstream file ("test.txt");
   while (file >> word){
    words++;
   }
   file.close();
  file.open("test.txt");
   char ch;
   {
    while(file.get(ch)){
        chars ++;
        if( ch == ' ') space ++;
        if( ch == '\n') lines++;
    }
    file.close();
    cout << "Lines :"<<lines <<endl;
    cout << "Words :"<<word <<endl;
    cout << "Characters :"<<chars<<endl;
    cout << "Spaces :"<<s;
   }
    return 0;
}