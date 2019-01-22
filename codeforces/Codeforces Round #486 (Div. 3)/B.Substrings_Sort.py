def bylength(word1,word2):
    return len(word2)-len(word1)
n = int(input())
string = []
maxlen = 0
for i in range(n):
    inp = input()
    string.append(inp)

b = sorted(string,key=len)
#print(string)
#print(b)
maxstring = b[-1]
#print(maxstring)
flag = 0
for i in range(n):
    if string[i] not in maxstring:
        flag = 1
        print("NO")
        exit(0)
print("YES")
for i in range(n):
    print(b[i])
