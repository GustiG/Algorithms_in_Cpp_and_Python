arr = [ 3, 2, 1, 4, 5, 9, 6, 7, 7 ]
n = len(arr)
find = 8

for i in range(n):
    if find == arr[i]:
        print("Element found at index", i)
        break
        
print(f"Element {find} not found.")