from queue import Queue

m = int(input())
q = Queue()

for _ in range(m):
    operation = int(input())
    if operation == 1:
        val = int(input())
        q.put(val)
    elif operation == 2:
        if not q.empty():
            q.get()
        else:
            print(-1)
    elif operation == 3:
        if not q.empty():
            print(q.queue[0])
        else:
            print(-1)
