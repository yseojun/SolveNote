import sys
input = sys.stdin.readline
s = input().strip()
c = [0] * 256
m = 0
for i in range(len(s)):
    if 'a' <= s[i] and s[i] <= 'z':
        n = ord(s[i]) - 32
    else:
        n = ord(s[i])
    c[n] += 1
    if c[n] > m:
        m = c[n]
o = 0
for i in range(0,256):
    if c[i] == m:
        if o == 0:
            o = chr(i)
        else:
            print("?")
            break
else:
    print(o)