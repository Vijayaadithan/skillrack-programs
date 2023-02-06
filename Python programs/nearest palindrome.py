nn=0
def palindrome(i):
    global nn 
    vijay=i 
    rev=0
    while(i>0):
        r=i%10
        rev=(rev*10)+r  
        i//=10
    if rev==vijay:
        nn=1 
        print(vijay)
        quit()
n=int(input())
palindrome(n)
l=n
r=n 
while nn<=0:
    l-=1 
    palindrome(l)
    r+=1 
    palindrome(r)

       