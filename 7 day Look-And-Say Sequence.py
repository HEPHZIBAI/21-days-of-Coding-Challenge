/*
https://www.codingninjas.com/studio/problems/look-and-say-sequence_9065115?challengeSlug=ninja-slayground&leftPanelTab=1
*/


from sys import stdin

def lookAndSequence(n):
	if(n==1):
		return "1"
	else:
		pt=lookAndSequence(n-1)
		nt=""
		c=1
		for i in range(1,len(pt)):
			if pt[i]==pt[i-1]:
				c+=1
			else:
				nt+=str(c)+pt[i-1]
				c=1
		nt+=str(c)+pt[-1]
		return nt
			
def takeInput() :

	n = int(input().strip())
	return n

t = int(input().strip())
for i in range(t) :

	n = takeInput()
	print(lookAndSequence(n))


#1,11,21,1211,111221,