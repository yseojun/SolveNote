import sys
input = sys.stdin.readline
n = int(input())
s = map(int, input().strip().split())
s = list(s)
min = s[0]
max = s[0]
for i in range(1,n):
    if s[i] < min:
        min = s[i]
    elif s[i] > max:
        max = s[i]
print(str(min) + ' ' + str(max))