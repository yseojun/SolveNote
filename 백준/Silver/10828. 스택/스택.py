import sys
input = sys.stdin.readline

class Stack:
    class Node:
        __slots__ = 'element', 'next'
        def __init__(self, e, n):
            self.element = e
            self.next = n
    
    def __init__(self):
        self.head = None
        self.size = 0
    def __len__(self):
        return self.size
    def is_empty(self):
        return self.size == 0
    def push(self, e):
        self.head = self.Node(e, self.head)
        self.size += 1
    def top(self):
        if self.is_empty():
            print(-1)
        else:
            print(self.head.element)
    def pop(self):
        if self.is_empty():
            print(-1)
        else:
            output = self.head.element
            self.head = self.head.next
            self.size -= 1
            print (output)
        
S = Stack()
n = int(input())
for i in range(n):
    l = input().strip().split()
    c = l[0]
    if c == "push":
        S.push(l[1])
    elif c == "pop":
        S.pop()
    elif c == "top":
        S.top()
    elif c == "size":
        print(S.size)
    elif c == "empty":
        if S.is_empty():
            print(1)
        else:
            print(0)