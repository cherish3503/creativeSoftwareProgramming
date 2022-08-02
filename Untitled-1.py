#insertion sort

import sys

def insertionSort(arr):
    for i in range(len(arr)-1):
        for j in range(i,-1,-1):
            if arr[j+1] < arr[j]:
                arr[j+1], arr[j] = arr[j], arr[j+1]
            else:
                break

    return arr

arr = list()

for i in range(int(input())):
    arr.append(int(sys.stdin.readline()))

result = insertionSort(arr)
print(result)

