import sys

input = sys.stdin.readline

n = int(input())
answer = 0
divisor = 5


while divisor <= n:
    answer += n // divisor
    divisor *= 5

print(answer)
