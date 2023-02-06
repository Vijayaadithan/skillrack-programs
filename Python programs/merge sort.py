def merge(a):
    c=[]
    if len(a)>1:
        mid=len(a)//2
        left=a[:mid]
        right=a[mid:]
        merge(left)
        merge(right)
        i=0
        j=0
        k=0
        while i<len(a) and j<len(a):
            if left[i]<=right[j]:
                c.append(left[i])
            else:
                c.append(right[j])
        while i<len(a):
            c.append(left[i])
        while j<len(a):
            c.append(right[j])
    for i in c:
        print(c)
x=list(map(int,input().split()))
merge(x)
