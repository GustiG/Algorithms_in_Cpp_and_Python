#include <iostream>
using namespace std;


// BINARY SEARCH with O(log)N
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int size = sizeof(arr) / sizeof(arr[0]);    // determine the size of the array (N)
    int target = 8;                             // setting the number to look for in the array
    int L = 0;                                  // declaring the initial left and right values in the array
    int R = size-1;
    
    while (L <= R) {
        int mid = L + (R - L) / 2; // not using (L+R)/2 to avoid overflow on longer arrays (A 32-bit int has a maximum value of 2^31 - 1, which is 2,147,483,647.)
        if (arr[mid] == target) {
            cout << "Target found at index: " << mid << endl;
            return 0;
        }
        if (arr[mid] < target)
            L = mid + 1;
        else
            R = mid - 1;
             
    } 
    cout << "Target not found in the array." << endl;
    return 0;
}