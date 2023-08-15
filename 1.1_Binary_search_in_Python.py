# BINARY SEARCH     O(log n)    n = the number of elements in the list

arr = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20]
size = len(arr)
target = 8
L = 0
R = size - 1

while L <= R:
    mid = L + (R - L) // 2 
    if arr[mid] == target:
        print(f"Target found at index: {mid}")
        break  # Optional: Terminate the loop when the target is found
    if arr[mid] < target:
        L = mid + 1
    else:
        R = mid - 1
else:
    print("Target not found in the list.")
