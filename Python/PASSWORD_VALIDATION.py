"""
You're interviewing to join a security team. They want to see you build a password evaluator for your technical interview to validate the input.

Task: 
Write a program that takes in a string as input and evaluates it as a valid password. The password is valid if it has at a minimum 2 numbers, 2 of the following special characters ('!', '@', '#', '$', '%', '&', '*'), and a length of at least 7 characters.
If the password passes the check, output 'Strong', else output 'Weak'.

Input Format:
A string representing the password to evaluate.

Output Format:
A string that says 'Strong' if the input meets the requirements, or 'Weak', if not.

Sample Input: 
Hello@$World19

Sample Output: 
Strong

"""
x = str(input())

num=["1","2","3","4","5","6","7","8","9","0"]
special=["@","#","!","*","&","%","$"]
c1=0
c2=0

if (len(x)>6) :
    for y in x :
        if y in num :
            c1=c1+1
            continue
        if y in special :
            c2=c2+1
            continue
    if ((c1 > 1) and (c2 > 1)) :
        print("Strong")
    else :
        print("Weak")
else:
    print("Weak")

