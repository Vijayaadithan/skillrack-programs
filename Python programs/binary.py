def raw(a):
    e=0 
    while a>0:
        if a%2==1:
            e+=1 
        a//=2 
    return e  
x,y,z=map(int,input().split())
f=0
c1=raw(z)
for i in range(x,y+1):
    if raw(i)==c1:
        print(i,end=" ")
        f=1
if f==0:
    print("-1")