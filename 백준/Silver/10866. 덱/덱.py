import sys
input = sys.stdin.readline

class Dequeue:
    class Node:
        __slots__ = 'element', 'next', 'prev'
        def __init__(self, e, n, p):
            self.element = e
            self.next = n
            self.prev = p
    def __init__(self):
        self.front = None
        self.back = None
        self.size = 0
    def __len__(self):
        return self.size
    def is_empty(self):
        return self.size == 0
    def push_front(self, e):
        new = self.Node(e, None, None)
        if self.is_empty():
            self.back = new
        else:
            self.front.prev = new
            new.next = self.front
        self.front = new
        self.size += 1
    def push_back(self, e):
        new = self.Node(e, None, None)
        if self.is_empty():
            self.front = new
        else:
            self.back.next = new
            new.prev = self.back
        self.back = new
        self.size += 1
    def pop_front(self):
        if self.is_empty():
            print(-1)
            return
        output = self.front.element
        self.front = self.front.next
        if self.front != None:
            self.front.prev = None
        self.size -= 1
        if self.is_empty():
            self.back = None
        print(output)
    def pop_back(self):
        if self.is_empty():
            print(-1)
            return
        output = self.back.element
        self.back = self.back.prev
        if self.back != None:
            self.back.next = None
        self.size -= 1
        if self.is_empty():
            self.front = None
        print(output)

D = Dequeue()
n = int(input())
for i in range(n):
    l = input().strip().split()
    c = l[0]
    if c == "push_front":
        D.push_front(l[1])
    elif c == "push_back":
        D.push_back(l[1])
    elif c == "pop_front":
        D.pop_front()
    elif c == "pop_back":
        D.pop_back()
    elif c == "size":
        print(D.size)
    elif c == "empty":
        if D.is_empty():
            print(1)
        else:
            print(0)
    elif c == "front":
        if D.is_empty():
            print(-1)
        else:
            print(D.front.element)
    elif c == "back":
        if D.is_empty():
            print(-1)
        else:
            print(D.back.element)