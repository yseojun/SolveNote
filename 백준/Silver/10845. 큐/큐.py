import sys
input = sys.stdin.readline

class Queue:
    class Node:
        __slots__ = 'element', 'next'
        def __init__(self, e, n):
            self.element = e
            self.next = n
    
    def __init__(self):
        self.front = None
        self.back = None
        self.size = 0
    def __len__(self):
        return self.size
    def is_empty(self):
        return self.size == 0
    def push(self, e):
        new = self.Node(e, None)
        if self.is_empty():
            self.front = new
        else:
            self.back.next = new
        self.back = new
        self.size += 1
    def pop(self):
        if self.is_empty():
            print(-1)
            return
        output = self.front.element
        self.front = self.front.next
        self.size -= 1
        if self.is_empty():
            self.back = None
        print(output)

Q = Queue()
n = int(input())
for i in range(n):
    l = input().strip().split()
    c = l[0]
    if c == "push":
        Q.push(l[1])
    elif c == "pop":
        Q.pop()
    elif c == "top":
        Q.top()
    elif c == "size":
        print(Q.size)
    elif c == "empty":
        if Q.is_empty():
            print(1)
        else:
            print(0)
    elif c == "front":
        if Q.is_empty():
            print(-1)
        else:
            print(Q.front.element)
    elif c == "back":
        if Q.is_empty():
            print(-1)
        else:
            print(Q.back.element)