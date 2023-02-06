'''

                            Online Python Compiler.
                Code, Compile, Run and Debug python program online.
Write your code in this editor and press "Run" button to execute it.

'''
m=int(input())#m=no.of elements
n,k=map(int,input().split())#n=upto n elements,k=no.of rotations
l=list(map(int,input().split()))#l=list storing m elements
for i in range(0,m,n):
    p=[];p=l[i:i+n]
    for j in range(k):
        p.append(p.pop(0))
    print(*p,end=' ')
        
        