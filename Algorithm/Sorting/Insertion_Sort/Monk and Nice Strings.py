N = int(input())
l = []
for x in range(N):
	l.insert(x,input())
	ans = 0
	i = x-1
	key = l[x]
	while i >= 0:
		if l[i] < key:
			ans += 1
		i-=1	
	print (ans)		
