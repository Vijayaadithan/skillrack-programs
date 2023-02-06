#Consecutive Digits


"""The program accepts an integer N as the input. All the digits in the number must be repeated consecutively. If a digit is not repeated consecutively, the program must repeat it for two times. Finally, the program must print the modified integer value.

Boundary Condition(s):
1 <= N <= 10^13

Input Format:
The first line contains the value of N.

Output Format:
The first line contains the modified integer value.

Example Input/Output 1:
Input:
1223

Output:
112233

Explanation:
1 and 3 are not repeated consecutively. So consider 1 and 3 as 11 and 33.
Hence the output is 112233.

Example Input/Output 2:
Input:
998888745551

Output:
998888774455511"""
    
    
s=input().strip()
ll=[]
for i in s:
    ll.append(i)
l=[]
i=0;count=1
while(i<len(s)):
    #k=i
    #j=k+1
    j=i+1
    count=1
    while(j<len(s)):
        if s[i]==s[j]:
            i+=1
            count+=1 
        else:
            break
        j+=1
    #print(i)
    if count==1:
        l.append(s[i])
    i+=1
vedha=[]
for i in ll:
    vedha.append(i)
    if i in l:
        vedha.append(i)
        l.remove(i)
for i in vedha:
    print(i,end="")
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    