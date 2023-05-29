import sys
input = sys.stdin.readline
n = int(input())
for i in range(n):
    k = 0
    s = input().strip()
    for j in range(len(s)):
        if s[j] == '(':
            k += 1
        elif s[j] == ')':
            k -= 1
            if k < 0:
                break
    if k == 0:
        print("YES")
    else:
        print("NO")