"""A certain number of people attended a meeting which was to begin at 10:00 am on a given day.
The arrival time in HH:MM format of those who attended the meeting is passed as the input in a single line,
with each arrival time by a space. 
The program must print the count of people who came late (after 10:00 am) to the meeting"""
count=0
l=list(map(str,input().split()))
for i in range(len(l)):
    x,y=l[i].split(":")
    h,m=int(x),int(y)
    if((h==10 and m>0)or(h>10)):
        count+=1
print(count)
