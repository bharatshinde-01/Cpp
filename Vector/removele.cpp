#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<< "  ";
    }
    cout<<"\nCapatity of the array is :" <<arr.capacity();

    arr.pop_back(); // ha Array cha shevt cha element deleat karo tya la value denyachi garaj nahi 
    // ha aapoap jo last cha elemet ahe to ha deleat karo 
    cout<<endl;
    for (int i = 0; i < n; i++) {
        cout << "  "<<arr[i];
    }

    return 0;
}