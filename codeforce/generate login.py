# div 2 
string = input().split()
print (string[0][0], end = '')
for x in range(1,len(string[0])):
	#print (x)
	if string[0][x] < string[1][0]:
		print (string[0][x], end = '')
	else:
		break	
print (string[1][0])
#print (string[0][2] < string[1][0])
