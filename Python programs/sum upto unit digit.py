def digSum(n):
    if n==0:
        return 0
    elif n%9==0:
        return 9
    else:
        return(n%9)
n = int(input())
print(digSum(n))
 
