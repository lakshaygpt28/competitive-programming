def main():
    T = int(raw_input())
    while T > 0:
        maxSum = 0
        minSum = 0
        N,M=list(map(int,raw_input().split()))
        A = list(map(int,raw_input().split()))
        sA = list(Bubble_sort(N,A))
        for x in sA[M:]:
            maxSum += x
        for x in sA[:N-M]:
            minSum += x    
        print (maxSum - minSum)
        T -= 1
        
   
        
def Bubble_sort(N,A):
    for i in range(N-1):
        for x in range(N-i-1):
            if A[x] > A[x+1]:
                A[x],A[x+1] = A[x+1],A[x]
    
    return A      
main()    