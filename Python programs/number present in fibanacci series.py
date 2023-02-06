n=int(input())
l=list(map(int,input().split()))
for i in l:
    a=0
    b=1 
    summ=0
    while(summ<i):
        summ=a+b 
        a=b 
        b=summ
    if summ==i:
        print(i,end=" ")