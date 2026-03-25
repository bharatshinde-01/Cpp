#include <iostream>
using namespace std;

int main() {
    int n; 
cout << "Enter the array number :";
cin >> n;
int i = 0;
int bh[5];
while (i < n) {
    cin>>bh[i];
i++;
}
cout << "You entred array is :";
i = 0;
while (i < n) {
    cout << bh[i];
i++;   

}
    return 0;
}