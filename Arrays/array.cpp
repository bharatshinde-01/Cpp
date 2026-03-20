#include <iostream>
using namespace std;
int main(){
    int marks[3];
    cout<<"Enter the numbers:"<<endl;
    for(int i =0; i <= 3; i++){
        cin>>i,marks[i];
    }
    for(int i =0 ; i <= 3; i++){
        cout<<"Number of you entered :"<<i<<marks[i]<<endl;
    }
    return 0;
}