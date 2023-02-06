"""An odd length string S of length L is passed as the input. The program must print the string S as two diagonals as shown in the example Input/Output below.

Input Format:
The first line will contain S.

Output Format:
L lines will contain the pattern as shown in the example Input/Output below.

Boundary Conditions:
Length of S is from 3 to 51.

Example Input/Output 1:
Input:
cry

Output:
c y
 r
c y

Example Input/Output 2:
Input:
tiger

Output:
t   r
 i e
  g
 i e
t   r"""
s=input().strip()
l=len(s)
for i in range(l):
    last=l-i-1
    for j in range(l):
        if i==j:
            print(s[j],end="")
        elif j==last:
            print(s[j],end="")
        else:
            print(" ",end="")
    print(" ")