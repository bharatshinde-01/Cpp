#include <bits/stdc++.h>
using namespace std;
class Fri {
    private :
    int value;
public:
    Fri(int v = 0){
        value = v;
      }
    void Getval() {
        cout << "Enter value :";
        cin >> value; 
    }
    void Show() {
        cout << "Value :"<<value<<endl;
    }
    
    friend void Swap(Fri &F, Fri &F2);
};
    void Swap(Fri &F , Fri &F2) {
       int temp = F.value;
       F.value = F2.value;
       F2.value = temp;
    }
int main() {
    Fri F,F2;

    F.Getval();
    F2.Getval();

    cout << "Befor swap :";
    F.Show();
    F2.Show();

    Swap(F,F2);

    cout << "After swap value :";
    F.Show();
    F2.Show();
    return 0;
}