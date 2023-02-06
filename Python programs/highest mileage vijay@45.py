
"""
The name and mileage of certain cars is passed as the input. 
The format is CARNAME@MILEAGE and the input is as a single line, 
with each car information separated by a space. The program must print the car with the highest mileage.
(Assume no two cars will have the lowest mileage)
"""
s=input().split()
c=0
print(s)
for i in range(len(s)):
    x,y=s[i].split('@')
    y=float(y)
    if y>c:
        c=y
        t=x
print(t)

