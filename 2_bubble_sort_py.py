# BUBBLE SORT with O(n^2)

arr = [4, 3, 2, 6, 8, 9, 9, 1]
n = len(arr)

for i in range (n - 1):
    j = i + 1
    for j in range (i + 1, n):
        if arr[j] < arr[j]:
            arr[i], arr[j] = arr[j], arr[i]

print("Sorted array:", arr)
