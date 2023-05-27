import sys
input = sys.stdin.readline
n = int(input())
P = []
for i in range(n):
    [x,y] = map(int, input().split())
    P.append([x,y])
s = sorted(P)
for i in range(n):
    print(s[i][0], s[i][1])