t = int(input())
for x in range(t):
	output = 0
	a,b,c = map(int,input().split())
	while True:
		n = 0
		if a>=1 and b>=1:
			if min(a,b,c) == c:
				if min(a,b) >= 2:
					sub = int(min(a,b)/2)
				else:
					sub = 1	
				a-=sub
				b-=sub
				output+=(2*sub)
				#print (1)
				n=1
		if a>=1 and c>=1:
			if min(a,b,c) == b:
				if min(a,c) >= 2:
					sub = int(min(a,c)/2)
				else:
					sub = 1	
				a-=sub
				c-=sub
				output+=(2*sub)
				#print (2)
				n=1
		if b>=1 and c>=1:
			if min(a,b,c) == a:
				if min(c,b) >= 2:
					sub = int(min(b,c)/2)
				else:
					sub = 1	
				c-=sub
				b-=sub
				output+=(2*sub)
				#print (3)
				n=1	
		if n == 0 :
			break				
	print (output)
