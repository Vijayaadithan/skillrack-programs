str1=input().strip()
str2=input().strip()
s1=len(str1)-1
s2=0
while(s1>=0):
    if str1[s1]!= str2[s2]:
        s2+=1
    else:
        if str1[s1-1]==str2[s2]:
            s1-=1
            s2+=1
        else:
            break 
for i in range(s2+1):
    print(str2[i],end="")
"""
INPUT:
mayday
daybreak

OUTPUT:
day
