#Your code below
# K=xth element to find
n, k = map(int, input().split())
mat = [list(map(int,input().split())) for _ in range(n)]
li = []
while mat:
    li += mat.pop(0)
    mat = (list(zip(*mat)))[::-1]
print(li)