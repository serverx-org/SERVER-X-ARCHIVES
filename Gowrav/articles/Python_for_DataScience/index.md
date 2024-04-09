Python for datascience
---
title: Python for data science
description: Fundamentals of Python for data science
author: Gowrav Sai Veeramallu
lastmod: 2024-04-09
github: https://github.com/SERVER-X-101/SERVER-X-ARCHIVES/blob/main/Gowrav/articles/Python_for_DataScience/index.md
tags:
  - Python "Print" function
  - Comments in Python
  - Literal Constants
  - Numbers
  - Strings
  - The format method
  - Variable naming
  - Input of a variable
  - Operators and Expressions
  - Evaluation Order
---

This article helps you learn the fundamental and basic concepts of python required for data science.

Python "Print" function:
------------------------

In Python,to print any function we use "print" keyword.
for eg: print("hello world").
The output will be hello world.
There are some restrictions in print function,In general,we use "+" operator for addition of two or more numbers, but in python we use "+" operator for combining two or more strings.In python print function "+" is called concatenation.
for eg : print(2+3)
output : 2+3
We can also print a string or any value by assigning it to a variable.
for eg: hello = 'tim'
print(hello)
output : tim

Comments in Python:
-------------------

In,python we usally comment sentences by using "#" character.
for eg:
a=2+2
print(b)
#output 4

Literal Constants:
------------------
An example of a literal constant is a number like 5, 1.23, or a string like 'This is a string' or "It's a string!".

It is called a literal because it is literal - you use its value literally. The number 2 always represents itself and nothing else - it is a constant because its value cannot be changed. Hence, all these are referred to as literal constants.

Numbers:
--------
In python there are mainly two types of numbers:
-------------------------------------------------

integers and float.
An example for integer is 1,2,100 etc.
Examples of floating point numbers (or floats for short) are 3.23 and 52.3E-4. The E notation indicates powers of 10. In this case, 52.3E-4 means 52.3 * 10^-4^.

NOTE : IN PYTHON THERE IS NO SEPARATE LONG TYPE , INTEGER CAN BE OF ANY SIZE.

Strings:
-------
A string is a sequence of characters. 
You can mention a string in single,double, or triple quotes.
'hello' or "hello" or '''hello'''
Using triple quotes indicate multi line strings.

Strings are immutable i.e once you have created a string, you cannot change it.

The format method:
------------------

When we want to construct a string in a specific format we use the "format" method.
eg:
age = 20
name = 'Swaroop'

print('{0} was {1} years old when he wrote this book'.format(name, age))
print('Why is {0} playing with that python?'.format(name))

Output:

$ python str_format.py
Swaroop was 20 years old when he wrote this book
Why is Swaroop playing with that python?

Variable naming:
----------------

-There are some rules you have to follow for naming identifiers:

-The first character of the identifier must be a letter of the alphabet (uppercase ASCII or lowercase ASCII or Unicode character) or an underscore (_).

-The rest of the identifier name can consist of letters (uppercase ASCII or lowercase ASCII or Unicode character), underscores (_) or digits (0-9).

-Identifier names are case-sensitive. For example, myname and myName are not the same. Note the lowercase n in the former and the uppercase N in the latter.

-Examples of valid identifier names are i, name_2_3. Examples of invalid identifier names are 2things, this is spaced out, my-name and >a1b2_c3.

Input of a variable:
--------------------

In c/c++, for taking a input we use printf("") or cin commands. But in python , we use input() keyword.
for eg : name = int(input())
This is input format for integer type data.
Similarly, we can also take input datatype for other datatypes.
We can also change the input format for being more precise.
name = int(input("Enter the input number: "))
output: Enter the input number:

Operators and Expressions:
--------------------------

Operators:
---------
Here is a quick overview of the available operators:

--> + (plus)
Adds two objects
3 + 5 gives 8. 'a' + 'b' gives 'ab'.

--> - (minus)
Gives the subtraction of one number from the other; if the first operand is absent it is assumed to be zero.
-5.2 gives a negative number and 50 - 24 gives 26.

--> * (multiply)
Gives the multiplication of the two numbers or returns the string repeated that many times.
2 * 3 gives 6. 'la' * 3 gives 'lalala'.

--> ** (power)
Returns x to the power of y
3 ** 4 gives 81 (i.e. 3 * 3 * 3 * 3)

--> / (divide)
Divide x by y
13 / 3 gives 4.333333333333333

--> // (divide and floor)
Divide x by y and round the answer down to the nearest integer value. Note that if one of the values is a float, you'll get back a float.
13 // 3 gives 4
-13 // 3 gives -5
9//1.81 gives 4.0

--> % (modulo)
Returns the remainder of the division
13 % 3 gives 1. -25.5 % 2.25 gives 1.5.

--> << (left shift)
Shifts the bits of the number to the left by the number of bits specified. (Each number is represented in memory by bits or binary digits i.e. 0 and 1)
2 << 2 gives 8. 2 is represented by 10 in bits.
Left shifting by 2 bits gives 1000 which represents the decimal 8.

--> >> (right shift)
Shifts the bits of the number to the right by the number of bits specified.
11 >> 1 gives 5.
11 is represented in bits by 1011 which when right shifted by 1 bit gives 101which is the decimal 5.

--> & (bit-wise AND)
Bit-wise AND of the numbers: if both bits are 1, the result is 1. Otherwise, it's 0.
5 & 3 gives 1 (0101 & 0011 gives 0001)

--> | (bit-wise OR)
Bitwise OR of the numbers: if both bits are 0, the result is 0. Otherwise, it's 1.
5 | 3 gives 7 (0101 | 0011 gives 0111)

--> ^ (bit-wise XOR)
Bitwise XOR of the numbers: if both bits (1 or 0) are the same, the result is 0. Otherwise, it's 1.
5 ^ 3 gives 6 (O101 ^ 0011 gives 0110)

--> ~ (bit-wise invert)
The bit-wise inversion of x is -(x+1)
~5 gives -6. More details at http://stackoverflow.com/a/11810203

--> < (less than)
Returns whether x is less than y. All comparison operators return True or False. Note the capitalization of these names.
5 < 3 gives False and 3 < 5 gives True.
Comparisons can be chained arbitrarily: 3 < 5 < 7 gives True.

--> > (greater than)
Returns whether x is greater than y
5 > 3 returns True. If both operands are numbers, they are first converted to a common type. Otherwise, it always returns False.

--> <= (less than or equal to)
Returns whether x is less than or equal to y
x = 3; y = 6; x <= y returns True

--> >= (greater than or equal to)
Returns whether x is greater than or equal to y
x = 4; y = 3; x >= 3 returns True

--> == (equal to)
Compares if the objects are equal
x = 2; y = 2; x == y returns True
x = 'str'; y = 'stR'; x == y returns False
x = 'str'; y = 'str'; x == y returns True

--> != (not equal to)
Compares if the objects are not equal
x = 2; y = 3; x != y returns True

--> not (boolean NOT)
If x is True, it returns False. If x is False, it returns True.
x = True; not x returns False.

--> and (boolean AND)
x and y returns False if x is False, else it returns evaluation of y
x = False; y = True; x and y returns False since x is False. In this case, Python will not evaluate y since it knows that the left hand side of the 'and' expression is False which implies that the whole expression will be False irrespective of the other values. This is called short-circuit evaluation.

--> or (boolean OR)
If x is True, it returns True, else it returns evaluation of y
x = True; y = False; x or y returns True. Short-circuit evaluation applies here as well.

Evaluation Order:
----------------

When you have a set of operations in a single statement,which operation will you choose first to do??
for eg : 2+3*5+(5-3)/2
There is a sequence for the operations to be done.
lambda : Lambda Expression
if - else : Conditional expression
or : Boolean OR
and : Boolean AND
not x : Boolean NOT
in, not in, is, is not, <, <=, >, >=, !=, == : Comparisons, including membership tests and identity tests
| : Bitwise OR
^ : Bitwise XOR
& : Bitwise AND
<<, >> : Shifts
+, - : Addition and subtraction
*, /, //, % : Multiplication, Division, Floor Division and Remainder
+x, -x, ~x : Positive, Negative, bitwise NOT
** : Exponentiation


In the next article we will learn about control flow statement,functions and modules.
