# Python : Conditional statements and iterational statements

# Control Flow Statements
---

### The if statement
---
The if statement is used to check a condition: if the condition is true, we run a block of statements (called the if-block), else we process another block of statements (called the else-block). The else clause is optional.

Consider an example : 

number = 23
guess = int(input('Enter an integer : '))

if guess == number:
    # New block starts here
    print('Congratulations, you guessed it.')
    print('(but you do not win any prizes!)')
    # New block ends here
elif guess < number:
    # Another block
    print('No, it is a little higher than that')
    # You can do whatever you want in a block ...
else:
    print('No, it is a little lower than that')
    # you must have guessed > number to reach here

print('Done')

Output:

Enter an integer : 50
No, it is a little lower than that
Done

### The elif statement
---

example:

grade = int(input("Enter your grade: "))

if grade >= 90:
  print("Excellent!")
elif grade >= 80:
  print("Very good!")
elif grade >= 70:
  print("Good job!")
else:
  print("You can do better.")


### The while statement
---

The while statement allows you to repeatedly execute a block of statements as long as a condition is true. A while statement is an example of what is called a looping statement. A while statement can have an optional else clause.

Example :

number = 23
running = True

while running:
    guess = int(input('Enter an integer : '))

    if guess == number:
        print('Congratulations, you guessed it.')
        # this causes the while loop to stop
        running = False
    elif guess < number:
        print('No, it is a little higher than that.')
    else:
        print('No, it is a little lower than that.')
else:
    print('The while loop is over.')
    # Do anything else you want to do here

print('Done')

Output:

Enter an integer : 50
No, it is a little lower than that.

### The for loop
---

The for..in statement is another looping statement which iterates over a sequence of objects i.e. go through each item in a sequence.

Example:

for i in range(1, 5):
    print(i)
else:
    print('The for loop is over')

Output:
1
2
3
4
The for loop is over

### The break Statement
---

The break statement is used to break out of a loop statement i.e. stop the execution of a looping statement, even if the loop condition has not become False or the sequence of items has not been completely iterated over.
An important note is that if you break out of a for or while loop, any corresponding loop else block is not executed.

Example:

while True:
    s = input('Enter something : ')
    if s == 'quit':
        break
    print('Length of the string is', len(s))
print('Done')

Output:

$ python break.py
Enter something : Programming is fun
Length of the string is 18
Done

### The continue Statement
---

The continue statement is used to tell Python to skip the rest of the statements in the current loop block and to continue to the next iteration of the loop.

Example:

while True:
    s = input('Enter something : ')
    if s == 'quit':
        break
    if len(s) < 3:
        print('Too small')
        continue
    print('Input is of sufficient length')

Output:

$ python continue.py
Enter something : a
Too small
Enter something : 12
Too small
Enter something : abc
Input is of sufficient length
Enter something : quit

# Functions

