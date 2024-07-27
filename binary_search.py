def binary_search(k, *a):
    left = 0
    right = len(a) - 1

    while left <= right:
        mid = left + (right - left) / 2

        if a[mid] == k:
            return mid
        elif a[mid] < k:
            left = mid + 1
        elif a[mid] > k:
            right = mid - 1
    
    return -1

n, k = int(input().split())
a = list(map(int, input()))

ans = binary_search(k, a)
print("No" if ans == -1 else ans)
