N,x = map(int,raw_input().split())
Arr = list(map(int,raw_input().split()))
for i in range(x):
	minimum = i
	for j in range(i+1,N):
		if Arr[j] < Arr[minimum]:
			minimum = j
	Arr[i],Arr[minimum]=Arr[minimum],Arr[i]
for i in Arr:
	print i ,