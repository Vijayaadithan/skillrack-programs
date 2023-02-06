p=int(input("give row1"))
q=int(input("give column 2"))
n=int(input("give column1 and row 2"))
print("give matrix 1")
mat1=[[int(input())for i in range(n)]for j in range(p)]
print("give matrix 2")
mat2=[[int (input())for i in range(q)]for j in range(n)]
result=[[0 for i in range(q)]for j in range(p)]
for i in range(p):
    for j in range(q):
        for k in range(n):
            result[i][j]=result[i][j]+mat1[i][k]*mat2[k][j]
print("resultant matrix")
for i in range(p):
    for j in range(q):
        print(result[i][j],end=" ")
    print()
