def main():
    N = int(raw_input())
    vaccine = list(map(int,raw_input().split()))
    person = list(map(int,raw_input().split()))
    sortvaccine = bubblesort(N,vaccine)
    sortperson = bubblesort(N,person)
    T = 1
    for x in range(N):
        if sortperson[x] > sortvaccine[x]:
            print "No"
            T = 0
            break
    if T == 1:
        print "Yes"
    
def bubblesort(N,A):
    for i in range(N-1):
        for j in range(N-i-1):
            if A[j] > A[j+1]:
                A[j],A[j+1] = A[j+1],A[j]
    
    return A            
main()    