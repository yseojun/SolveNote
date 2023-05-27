n = int(input())
w = []

for _ in range(n):
    tmp = input()
    if tmp not in w:
        w.append(tmp)

w.sort(key=lambda x: (len(x), x))

for word in w:
    print(word)
