#include <iostream>
using namespace std;
int main(){
    int marks[3]; // Array alaway's start with 0 incex EX int marks [3]; 0 to 2 
    cout<<"Enter the numbers:"<<endl;
    for(int i =0; i <= 2; i++){
        cin>>marks[i];
    }
    for(int i =0 ; i <= 2; i++){
        cout<<"Number of you entered :"<<marks[i]<<endl;
    }
    return 0;
}