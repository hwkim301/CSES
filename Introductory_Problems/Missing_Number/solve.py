import sys

input = sys.stdin.readline

n = int(input())
l = map(int, input().split())

ans = sum(range(1, n + 1)) - sum(l)
print(ans)
