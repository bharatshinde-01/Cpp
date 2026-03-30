#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;
    // cout << "Enter the Vector array size :";
    // cin >> n;
    vector<int> arr(n); // Vector madhe aapn default value pan deu shkato EX. arr(n,4) atta 4 print honar a
    // ani by defaut valur 0 aste  
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cout << "  "<<arr[i];
    }
    cout << endl <<"Before add element of size of vector arrya is :"<<arr.size(); // Array chi size kiti aahe te dakhvto 

        arr.push_back(10); // Array madhe last la element add karto 

    cout << endl <<" Size of the vactor array after add element "<<arr.size()<<endl;// Array chi size ek element add jalya vr kiti ahe te dakhvto 

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