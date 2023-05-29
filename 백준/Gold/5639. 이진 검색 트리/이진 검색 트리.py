import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

def postorder(left,right):
    if left>right:
        return
    else:
        mid = right+1
        for i in range(left+1, right+1):
            if n[left] < n[i]:
                mid = i
                break
        postorder(left+1, mid-1)
        postorder(mid,right)
        print(n[left])

n=[]
while True:
    try:
        num=int(input())
        n.append(num)
    except:
        break

postorder(0, len(n)-1)