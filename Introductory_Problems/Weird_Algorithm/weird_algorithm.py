import sys

input = sys.stdin.readline

n = int(input())
while True:
    print(n, end=' ')
    if n == 1:
        break
    if n % 2 == 1:
        n = 3 * n + 1
    else:
        n //= 2
