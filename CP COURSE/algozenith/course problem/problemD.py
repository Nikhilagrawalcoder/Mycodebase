t = int(input())  

for _ in range(t):
    n = int(input())  
    arr = list(map(int, input().split()))  
    
    prod = 1
    for i in range(n):
        prod *= arr[i] 
    start, end = 1, 10**9 + 7
    ans = -1
    while start <= end:
        mid = start + (end - start) // 2
        tthtjt = pow(mid, n)
        if tthtjt > prod:
            ans = mid
            end = mid - 1
        else:
            start = mid + 1
    print(ans)
