def digit(x):
    sum=0
    while(x>0):
        r=x%10
        sum+=r
        x//=10
    return sum
n=int(input())
m=0
for i in range(1,n+1):
    f=digit(i)
    if f>=m:
        m=f
        max=i 
print(max)
