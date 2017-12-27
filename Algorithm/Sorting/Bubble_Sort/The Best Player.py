def main():
    T,N = map(int,raw_input().split())
    D = []
    n=T
    while T > 0:
        i=0
        name,fanquotient = raw_input().split()
        D.insert(i,(int(fanquotient),name))
        T-=1
        i+=1
    #print D    
    sD = (sorted(D, reverse = True))
    #print sD
    
    for a in range(n-1):
        for x in range(n-a-1):
            #print sD[x][1],sD[x][0]
            #print x+1
            if sD[x][0] == sD[x+1][0]:
                #print sD[x][1],sD[x][0]
                if sD[x][1] > sD[x+1][1]:
                    sD[x],sD[x+1] = sD[x+1],sD[x] 
    #print sD                
    for x in range(N):
        print sD[x][1]
            
    #print D
main()    