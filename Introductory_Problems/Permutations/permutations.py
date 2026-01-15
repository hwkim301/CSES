import sys

input = sys.stdin.readline

n = int(input())
l = []

for i in range(2, n + 1, 2):
    l.append(i)

for i in range(1, n + 1, 2):
    l.append(i)

if n == 2 or n == 3:
    print('NO SOLUTION')

else:
    print(*l)
