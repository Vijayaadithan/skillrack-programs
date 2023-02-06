s=input().split()
distance=[]
time=[]
for i in s:
    d,t=str(i).split('@')
    distance.append(int(d))
    time.append(int(t))
td=sum(distance)
tt=sum(time)
ans=td/tt 
print("{:.2f}".format(ans),'Kmph')