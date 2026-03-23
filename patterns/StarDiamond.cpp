#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the N number :";
    cin>>n;
    char ch = 'A';
    for( int i = 1; i<=n; i++){
        for(int j =1 ; j <= n-i; j++){
            cout <<" ";
        }
        for( int j=1 ; j<=i; j++){
            cout<<" *";
            
        }
        cout<<endl;
    }

    
    for (int i =1; i<= n -1; i++){
        for( int j =1; j<=i; j++){
                cout<<" ";
        }
        for(int l =1; l <= n -i; l++){
            cout<<" *";
        }
       cout<< endl;
        
    }
}