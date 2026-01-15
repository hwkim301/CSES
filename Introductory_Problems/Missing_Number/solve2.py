import sys

input = sys.stdin.readline

n = int(input())
l = map(int, input().split())
exists = [False] * (n + 1)

for x in l:
    exists[x] = True

for i in range(1, n + 1):
    if not exists[i]:
        print(i)
        break
