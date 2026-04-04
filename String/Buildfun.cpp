#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string str = "Bhara";

    str.push_back('T'); // This function is add last character only in string 
    cout << " After push_back(); use :"<<str<<endl;

    str.append("  ShindE"); // This function is add hole string in last or use " " double collen's
    cout << "After append(); use :"<<str<<endl;

    str.pop_back(); // This function is remove last character 
    cout << "After pop_back(); use :"<<str<<endl;

    str.clear(); // This function is clear hole string remove/ delete
    cout << "After clear(); use :"<<str<<endl;

    str = str + "Bharat"; // + this operator add sting starting 
    cout << "After use + operator "<<str<<endl;

    str = "Shinde  " + str; // + this operator add sting last basically he is best version of append(); function
    cout << "Before use + operator :" <<str<<endl;

    reverse(str.begin(), str.end()); // This function is reverse hole string str.begin() this piont 1st letter momory pointer
                                // end(); hi is point last letter before empty space 
    cout << "After reverse(); use :"<<str<<endl;
    return 0;
}