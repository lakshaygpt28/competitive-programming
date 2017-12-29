''' This problem was seriously amazing and very tricky '''

t = int(input())
for i in range(t):
	r,c,d = map(int,input().split())
	dept = []
	for x in range(d):
		dept.insert(x,0)
	arr_of_d = list(map(int,input().split()))
	for x in range(r*c):
		dept[arr_of_d[x]-1] += 1	
	print ("yes")		
