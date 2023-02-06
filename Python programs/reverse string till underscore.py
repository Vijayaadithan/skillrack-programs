s=input()
n=s.find("_")
if n==-1:
    print(s[::-1])
elif n==len(s)-1:
    v=s[:len(s)-1]
    print(v[::-1]+"_")
else:
    print(s[:n][::-1]+s[n:])
