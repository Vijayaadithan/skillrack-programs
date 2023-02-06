"""The program must accept a string S and an integer N as input. The program must print the characters repeating consecutively at least N times as the output.

Boundary Condition(s):
2 <= Length of String S <= 100
1 <= N <= 10

Input Format:
The first line contains the value of string S.
The second line contains the value of N.

Output Format:
The first line contains the characters repeating consecutively at least N times.

Example Input/Output 1:
Input:
aabccbhhhh
2

Output:
ach

Example Input/Output 2:
Input:
aaaabbcccbb
3

Output:
ac 
"""




s=input().strip()
n=int(input())
i=0
while(i<len(s)):
    x=s[i]
    j=i+1
    count=1 
    while(j<len(s)):
        if s[i]==s[j]:
            count+=1 
            j+=1 
        else:
            break
    if count>=n:
        print(s[i],end="")
        i+=count
    else:
        i+=1 
        
        