#include <iostream>
#include <vector>
using namespace std;

// BUBBLE SORT with O(n^2)
int main()
{
    vector<int> arr = { 4, 3, 2, 6, 8, 9, 9, 1 };
    int n = arr.size();

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; j++ ) {
            if (arr[j] < arr[i]) {
                int temp = arr[i]; 
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        cout << arr[i];
        if (i < n - 1)
            cout << ", ";
        else
            cout << ".\n";
    }
    return 0;
}