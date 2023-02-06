s=input().strip();l=len(s);x=len(s)-1;y=0
for i in range(len(s)):
    for j in range(len(s)):
        if i==len(s)//2:
            print(s,end="")
            break 
        elif i==j or j==x:
            print(s[l-1],end="")
        elif j==len(s)//2:
            print(s[y],end="")
        else:
            print(end="*")
    print()
    l-=1 
    x-=1 
    y+=1 