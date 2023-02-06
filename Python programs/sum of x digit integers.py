"""
    Sum of X-digit Integers


The program must accept an integer N and a digit X as the input. 
The program must split the integer N into X-digit integers then
the program must print the sum of those X-digit integers as the output. 
Note: Number of Digits in N is always divisible by the digit X.
Boundary Condition(s): 1 <= N <= 10^19 1 <= X <= 9 
Input Format: The first line contains the values of N and X separated by a space.
Output Format: The first line contains the sum as per the given condition.
Example Input/Output 1:
    Input: 488015 2 
    Output: 143 
    Explanation: The two-digit integers of 488015 are 48, 80 and 15. 
    The sum of the two-digit integers is 48 + 80 + 15 = 143. 
    Hence the output is 143
    Example Input/Output 2:
        Input: 1012485170 5 
        Output: 95294
"""
s=list(map(str,input().split()))
n=int(s[0]);x=int(s[1]);l=[]
for i in s[0]:
    l.append(i)
ll=[];index=0 
for i in range(len(l)//x):
    c=0;ss=""
    while (c!=x):
        ss+=l[index]
        index+=1;c+=1 
    ll.append(int(ss))
print(sum(ll))