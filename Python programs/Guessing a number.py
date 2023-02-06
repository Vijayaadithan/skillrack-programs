import random
x=random.randint(1,10)
y=5
count=0
for i in range(5):
    y=y-1
    f=int(input("guess :"))
    if f==x:
        count=count+1
        print("Your guess is correct")
        break
    else:
        print("Try again you have %d chances left"%(y))
        print()
if count==0:
    print("!!Better luck next time!!")
