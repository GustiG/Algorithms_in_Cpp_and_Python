#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 3, 2, 1, 4, 5, 9, 6, 7, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int find = 8;
    for (int i = 0; i < n; ++i) {
        if (find == arr[i]) {
            cout << "Element found at index: " << i << '\n';
            return true;
        }
    }
    cout << "Element " << find << " not found.\n";
    return false;
   
}