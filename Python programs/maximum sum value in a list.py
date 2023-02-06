n=int(input())
l=list(map(int,input().split()))
vijay=[];sum=0;a=0
for i in l:
    if i>a:
        sum+=i 
        a=i 
    else:
        vijay.append(sum)
        sum=i 
        a=i
vijay.append(sum)
print(max(vijay))


#5
#5 4 3 2 1 2 4
#op 
#7