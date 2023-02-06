s=input().strip()
a=[]
o=" "
for i in s:
    if i.isdigit():
        o+=i
    else:
        a.append(i)
        o+=' '
m=o.split()
for i in range(len(a)):
    print(a[i]*int(m[i]),end="")
    