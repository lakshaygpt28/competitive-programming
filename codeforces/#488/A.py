n,m = map(int,input().split())
Arr = list(map(int,input().split()))
Finger = list(map(int,input().split()))
for i in range(n):
    for j in range(m):
        if Arr[i] == Finger[j]:
            print(Finger[j], end = " ")
print ()
