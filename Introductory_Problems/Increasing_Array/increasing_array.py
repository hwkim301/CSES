import sys

input = sys.stdin.readline

n = int(input())

x = list(map(int, input().split()))

ans = 0

for i in range(1, n):
    if x[i] < x[i - 1]:
        ans += x[i - 1] - x[i]
        x[i] = x[i - 1]
print(ans)
