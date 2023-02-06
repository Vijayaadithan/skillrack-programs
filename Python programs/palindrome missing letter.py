
"""String S which is a palindrome is passed as the input. 
But just one alphabet A is missing in S. The program must print the missing alphabet A.
Note: The FIRST alphabet of S will always be present."""


s=input()
v=len(s)-1
for i in range(len(s)):
    if s[i]!=s[v]:
        print(s[i])
        break
    else:
        v-=1
