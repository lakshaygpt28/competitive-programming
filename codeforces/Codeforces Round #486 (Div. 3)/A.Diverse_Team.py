n,k = map(int,input().split())
A = list(map(int,input().split()))
B = [A[0]]
ans = [1]
flag = 0
for i in range(1,n):
    flag = 0
    for item in B:
        if A[i] == item:
            flag = 1
            break
    if flag == 0:
        B.append(A[i])
        ans.append(i+1)
if len(ans) < k:
    print("NO")
else:
    print("YES")
    for i in range(k):
        print(ans[i], end =" ")
