import sys

input = sys.stdin.readline

n = int(input())
answer = 0

for i in range(1, n + 1):
    answer += n // (5**i)
    if 5**i >= n:
        break

print(answer)
