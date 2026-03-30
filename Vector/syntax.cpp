#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;
    // cout << "Enter the Vector array size :";
    // cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cout << "  "<<arr[i];
    }
    cout << endl <<"Before add element of size of vector arrya is :"<<arr.size();
        arr.push_back(10);
    cout << endl <<" Size of the vactor array after add element "<<arr.size()<<endl;
    cout << "After add ele print array";
    for (int i = 0; i < n; i++) {
        cout << " "<<arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    cout <<endl <<"Sum of Vector array is this "<<sum;
    return 0;
}