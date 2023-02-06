n=int(input())
l=[]
for i in range(n):
    x=list(map(int,input().split()))
    l.append(x)
summoffirstdiagonal=sum(l[i][i] for i in range(n))
summofseconddiagonal=sum(l[i][n-i-1]for i in range(n))
print(summofseconddiagonal+summoffirstdiagonal)