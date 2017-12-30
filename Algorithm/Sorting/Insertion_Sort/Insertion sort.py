def main():
	N = int(input())
	A = list(map(int,input().split()))
	sort_A = Insertion_Sort(list(A))
	#print (A)
	#print (sort_A)
	for x in A:
	    for i in range(N):
	        if x == sort_A[i]:
	            print (i+1,end = " " )

def Insertion_Sort(A1):
	l = len(A1)
	for j in range(1,l):
		key = A1[j]
		i = j-1
		while i >= 0 and A1[i] > key:
			A1[i+1] = A1[i]
			i -= 1
		A1[i+1] = key
	return A1

if __name__ == "__main__":
	main()
