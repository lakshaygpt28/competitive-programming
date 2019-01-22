k = int(input())
arr = []
for i in range(k):
    n = int(input())
    inp = list(map(int,input().split()))
    out =[]
    S = sum(inp)
    for items in inp:
        out.append(S-items)
    arr.append(out)
A = []
for i in range(k):
    for item in arr[i]:
        if item not in A:
            A.append()
        for m in range(l):
            if arr[i][m] in arr[j]:
                print("YES")
                print(i+1,m+1)
                print(j+1,arr[j].index(arr[i][m])+1)
                exit(0)
print("NO")
