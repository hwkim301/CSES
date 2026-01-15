import sys
input = sys.stdin.readline

dna=input().strip()
cur,ans,prev=1,1,' '

for c in dna:
	if c==prev:
		cur+=1
	else:
		prev=c
		cur=1 
	ans=max(ans,cur)

print(ans)
