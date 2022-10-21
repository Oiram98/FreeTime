"""
You have to get a new driver's license and you show up at the office at the same time as 4 other people. The office says that they will see everyone in alphabetical order and it takes 20 minutes for them to process each new license. All of the agents are available now, and they can each see one customer at a time. How long will it take for you to walk out of the office with your new license?

Task 
Given everyone's name that showed up at the same time, determine how long it will take to get your new license.

Input Format 
Your input will be a string of your name, then an integer of the number of available agents, and lastly a string of the other four names separated by spaces.

Output Format 
You will output an integer of the number of minutes that it will take to get your license.

Sample Input
'Eric'
2
'Adam Caroline Rebecca Frank'

Sample Output 
40
"""

myname = input()
num_agents = int(input()) 
other_names = list(input().split())
lista = other_names
lista.append(myname) 
lista.sort()
ind_myname = lista.index(myname)+1

if ind_myname <= num_agents :
 print("20")
else :
 print((ind_myname-num_agents)*20+20)
