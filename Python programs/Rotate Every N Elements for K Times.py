n=int(input())
l=list(map(int,input().split()))
vijay=""
r,t=map(int,input().split())
rem=n//r
k=0
for i in range(rem):
    x=l[k:r]
    for j in range(t):
        y=x.pop(0)
        x.append(y)
    for j in x:
        print(j,end=" ")
    k+=r 
    r+=r
l.reverse()
vedha=l[:rem]
xx=[]
vedha.reverse()
#print(vedha)
for i in range(t):
    m=vedha.pop(0)
    vedha.append(m)
for i in vedha:
    print(i,end=" ")

    