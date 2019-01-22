n,m = map(int,input().split())
A = []
for i in range(n):
    b = list(input())
    A.insert(n,b)
print(A)
flag = 1
for j in range(m):
    bulb = 0
    for i in range(n):
        if A[i][j] == '1':
            bulb += 1
    if bulb <= 1:
        flag = 0
        break
if flag == 0:
    print("NO")
else:
    print("YES")
