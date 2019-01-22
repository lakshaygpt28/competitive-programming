N = int(input())
P = list(map(int,input().split()))
P.sort()
#for white
moveswhite = 0
movesblack = 0
i = 1
for items in P:
    #print(i,items,abs(i-items))
    moveswhite += abs(i-items)
    i += 2
#for black
i = 2
for items in P:
    #print(i,items,abs(i-items))
    movesblack += abs(i-items)
    i += 2
print(min(moveswhite,movesblack))
