n=input()
l=list(map(int,input().split()))
#poet has to select box from reverse 
l.reverse()
vijay=0
index=0
while(index<len(l)):
    if l[index]%10==0:
        vijay=1 
        print(l[index])
        break
    else:
        x=l[index]%10
        #skipping unit digit number in index
        index+=x 
# if no unit digit 0 the print 1st box
if vijay==0:
    print(l[len(l)-1])