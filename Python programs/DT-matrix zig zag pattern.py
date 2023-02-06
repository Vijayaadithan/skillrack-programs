r,c=map(int,input().split())
s=input()
vedha=[]
listt=s.split()
for k in range(len(listt)):
    vijay=int(listt[k])
    k+=1
    while(vijay>0):
        vedha.append(k)
        vijay-=1
#print(vedha)
b=""
vim=0
for i in range(r):
    for j in range(c):
        b=b+str(vedha[vim])
        vim+=1
    b=b+" "
real=b.split(" ")
real.pop(len(real)-1)


mm=0
for i in real:
    for j in range(len(i)):
        if mm%2==0:
            print(i[j],end=" ")
        else:
            xx=i[::-1]
            print(xx[j],end=" ")
    print()
    mm+=1
    
        
        