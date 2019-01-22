n = int(input())
A = list(map(int,input().split()))
Ans = []
for i in range(n-1):
    if A[i+1] == 1:
        Ans.append(A[i])
Ans.append(A[n-1])
print(A.count(1))
print(*Ans)        
