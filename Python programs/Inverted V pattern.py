"""Input:
orange
energy 

Output:
-----e
----g-n
---n---e
--a-----r
-r-------g
o---------y

Example Input/Output 2:
Input:
apple
orange

Output:
-1

Example Input/Output 3:
Input:
neuro 
lemon

Output:
----n
---o-e
--m---u
-e-----r
l-------o
"""

s=input().strip()
m=input().strip()
if s[0]==m[len(m)-1]:
    temp=s
    s=m
    m=temp[::-1]
elif s[len(s)-1]==m[0]:
    m=m[::-1]
elif len(s)!=len(m):
    print("-1")
else:
    print("-1")
k=0
if len(s)==len(m):
    for i in range(len(s),0,-1):
        for j in range(len(s)+len(m)-2):
            if j==i-1:
                if s[j]==m[j]:
                    print(s[j])
                    k=1
                    break 
                else:
                    print(s[j],end="")
                    print("-"*k,end="")
                    print(m[j])
                    k+=2
                    break
                    
            else:
                print("-",end="")
        
            