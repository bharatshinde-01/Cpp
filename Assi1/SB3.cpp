#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    float *arr = new float[n];  
    // dynamic memory allocation
    // arr pointer n size ka float array bana raha hai

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];  
        // values array me store ho rahi hain
    }

    cout << "Alternate elements are: ";
    for(int i = 0; i < n; i += 2)
    {
        cout << arr[i] << " ";  
        // i += 2 se 0,2,4,6 index print honge
    }

    delete[] arr;  
    // dynamically allocated memory free kar rahe hain

    return 0;
}
