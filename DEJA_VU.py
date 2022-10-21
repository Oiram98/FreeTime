"""
You aren't paying attention and you accidentally type a bunch of random letters on your keyboard. You want to know if you ever typed the same letter twice, or if they are all unique letters.

Task: 
If you are given a string of random letters, your task is to evaluate whether any letter is repeated in the string or if you only hit unique keys while you typing.

Input Format: 
A string of random letter characters (no numbers or other buttons were pressed).

Output Format: 
A string that says 'Deja Vu' if any letter is repeated in the input string, or a string that says 'Unique' if there are no repeats.

Sample Input: 
aaaaaaaghhhhjkll

Sample Output: 
Deja Vu
"""

inp = str(input())
newx = []
x=0
y=0
z=0

while x<len(inp) :
    newx.append(inp[x])
    x = x + 1

x=0
doppia=0
for ind in newx :
    if (doppia == 1):
        break
    cur = ind
    while y<len(inp) :
        if ((cur == newx[y]) and (y!=z)) :
            print("Deja Vu")
            doppia=1
            break
        else :
            y = y + 1
    z = z + 1
    y = 0

if ( doppia == 0 ) :
    print("Unique")
