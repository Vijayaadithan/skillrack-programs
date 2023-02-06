n=int(input())
count=0
l=[]
ll=[]
for i in range(n):
    x=int(input())
    l.append(x)
factorof1=[]
for i in range(2,l[0]+1):
    if l[0]%i==0:
        factorof1.append(i)
del(l[0])
factor=[]
for i in l:
    for j in range(2,i+1):
        if i%j==0 and j in factorof1:
            factor.append(j)
print(factor)
print(factorof1)
for i in factorof1:
    if factor.count(i)==n-1:
        count+=1 
print(count)

    