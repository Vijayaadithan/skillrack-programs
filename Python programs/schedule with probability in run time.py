import random
subject=[]
weights=[]
x=int(input("how many subjects :"))
for i in range(1,x+1):
    y=input("subject name :")
    subject.append(y)
    z=int(input("Give weights :"))
    weights.append(z)
print(subject)
print()
a=random.choices(subject,weights)
print(a)
