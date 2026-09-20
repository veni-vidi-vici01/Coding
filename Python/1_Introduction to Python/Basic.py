# ============================================================
# 1. Hello World
# ============================================================

print("Hello World!")
print("Welcome to Python!")


# ============================================================
# 2. Comments
# ============================================================

# This is a single-line comment

"""
This is a
multi-line string.
It can also be used as a multi-line comment.
"""


# ============================================================
# 3. Basic Arithmetic Operators
# ============================================================

print(2 + 3)      # Addition (+)
print(3 - 1)      # Subtraction (-)
print(2 * 3)      # Multiplication (*)
print(3 / 2)      # Division (/)
print(3 ** 2)     # Exponentiation (**)
print(3 % 2)      # Modulus (%)
print(3 // 2)     # Floor division (//)


# ============================================================
# 4. Variables
# ============================================================

name = "Gaurav"
age = 20
height = 5.8
is_student = True

print(name)
print(age)
print(height)
print(is_student)


# ============================================================
# 5. Multiple Variables
# ============================================================

first_name, last_name, age = "Gaurav", "Telange", 20

print(first_name)
print(last_name)
print(age)


# ============================================================
# 6. Checking Data Types
# ============================================================

print(type(10))                    # int
print(type(3.14))                  # float
print(type(1 + 3j))                # complex
print(type("Gaurav"))              # str
print(type([1, 2, 3]))             # list
print(type((1, 2, 3)))             # tuple
print(type({1, 2, 3}))             # set
print(type({"name": "Gaurav"}))    # dict
print(type(True))                  # bool


# ============================================================
# 7. Basic Data Types
# ============================================================

integer_number = 100
float_number = 10.5
complex_number = 2 + 3j
string_value = "Python"
boolean_value = True

print(integer_number)
print(float_number)
print(complex_number)
print(string_value)
print(boolean_value)


# ============================================================
# 8. Type Conversion
# ============================================================

number = "100"

print(int(number))       # String -> Integer
print(float(number))     # String -> Float

age = 20
print(str(age))          # Integer -> String

value = 1
print(bool(value))       # Integer -> Boolean


# ============================================================
# 9. Taking Input
# ============================================================

# input() always returns a string

user_name = input("Enter your name: ")

print("Hello", user_name)


# ============================================================
# 10. Input with Type Conversion
# ============================================================

user_age = int(input("Enter your age: "))

print("Your age is:", user_age)


# ============================================================
# 11. String Basics
# ============================================================

message = "Python Programming"

print(message)

print(len(message))          # Length
print(message.upper())       # Uppercase
print(message.lower())       # Lowercase
print(message.title())       # Title case

print(message[0])            # First character
print(message[-1])           # Last character


# ============================================================
# 12. String Slicing
# ============================================================

text = "Python"

print(text[0:3])      # Pyt
print(text[2:])       # thon
print(text[:4])       # Pyth
print(text[::2])      # Pto
print(text[::-1])     # nohtyP


# ============================================================
# 13. String Concatenation
# ============================================================

first_name = "Gaurav"
last_name = "Telange"

full_name = first_name + " " + last_name

print(full_name)


# ============================================================
# 14. f-Strings
# ============================================================

name = "Gaurav"
age = 20

print(f"My name is {name} and I am {age} years old.")


# ============================================================
# 15. Boolean Values
# ============================================================

is_python_easy = True
is_java_hard = False

print(is_python_easy)
print(is_java_hard)


# ============================================================
# 16. Comparison Operators
# ============================================================

a = 10
b = 5

print(a == b)      # Equal
print(a != b)      # Not equal
print(a > b)       # Greater than
print(a < b)       # Less than
print(a >= b)      # Greater than or equal
print(a <= b)      # Less than or equal


# ============================================================
# 17. Logical Operators
# ============================================================

age = 20
has_id = True

print(age >= 18 and has_id)
print(age >= 18 or has_id)
print(not has_id)


# ============================================================
# 18. if Statement
# ============================================================

age = 20

if age >= 18:
    print("You are an adult.")


# ============================================================
# 19. if-else
# ============================================================

age = 16

if age >= 18:
    print("You can vote.")
else:
    print("You cannot vote yet.")


# ============================================================
# 20. if-elif-else
# ============================================================

marks = 75

if marks >= 90:
    print("Grade A+")
elif marks >= 80:
    print("Grade A")
elif marks >= 70:
    print("Grade B")
elif marks >= 60:
    print("Grade C")
else:
    print("Need improvement")


# ============================================================
# 21. Lists
# ============================================================

numbers = [10, 20, 30, 40, 50]

print(numbers)
print(numbers[0])
print(numbers[-1])

numbers.append(60)
print(numbers)

numbers.remove(30)
print(numbers)


# ============================================================
# 22. List Operations
# ============================================================

numbers = [5, 2, 8, 1, 9]

print(len(numbers))
print(max(numbers))
print(min(numbers))
print(sum(numbers))

numbers.sort()
print(numbers)


# ============================================================
# 23. Tuples
# ============================================================

coordinates = (10, 20)

print(coordinates)
print(coordinates[0])
print(coordinates[1])

# Tuples cannot be changed after creation.


# ============================================================
# 24. Sets
# ============================================================

numbers = {1, 2, 3, 3, 4, 5}

print(numbers)       # Duplicate 3 is removed

numbers.add(6)
print(numbers)

numbers.remove(2)
print(numbers)


# ============================================================
# 25. Dictionaries
# ============================================================

student = {
    "name": "Gaurav",
    "age": 20,
    "course": "CSE"
}

print(student)

print(student["name"])
print(student["age"])

student["age"] = 21
print(student)

student["college"] = "ABC College"
print(student)


# ============================================================
# 26. Dictionary Methods
# ============================================================

student = {
    "name": "Gaurav",
    "age": 20,
    "course": "CSE"
}

print(student.keys())
print(student.values())
print(student.items())


# ============================================================
# 27. Membership Operators
# ============================================================

numbers = [1, 2, 3, 4, 5]

print(3 in numbers)
print(10 in numbers)
print(10 not in numbers)


# ============================================================
# 28. for Loop
# ============================================================

for i in range(5):
    print(i)


# ============================================================
# 29. for Loop with List
# ============================================================

languages = ["C", "C++", "Python", "Java"]

for language in languages:
    print(language)


# ============================================================
# 30. while Loop
# ============================================================

count = 1

while count <= 5:
    print(count)
    count += 1


# ============================================================
# 31. break
# ============================================================

for i in range(10):
    if i == 5:
        break

    print(i)


# ============================================================
# 32. continue
# ============================================================

for i in range(10):
    if i == 5:
        continue

    print(i)


# ============================================================
# 33. Functions
# ============================================================

def greet():
    print("Hello from Python!")


greet()


# ============================================================
# 34. Function Parameters
# ============================================================

def greet_user(name):
    print(f"Hello {name}!")


greet_user("Gaurav")


# ============================================================
# 35. Function Return Value
# ============================================================

def add(a, b):
    return a + b


result = add(10, 20)

print(result)


# ============================================================
# 36. Basic Scope
# ============================================================

x = 10

def show_number():
    y = 20
    print(x)
    print(y)


show_number()


# ============================================================
# 37. Useful Built-in Functions
# ============================================================

numbers = [10, 20, 30, 40]

print(len(numbers))
print(max(numbers))
print(min(numbers))
print(sum(numbers))
print(sorted(numbers))


# ============================================================
# 38. Basic Practice
# ============================================================

# Calculate the area of a rectangle

length = 10
width = 5

area = length * width

print("Area =", area)


# ============================================================
# 39. Even or Odd
# ============================================================

number = 7

if number % 2 == 0:
    print("Even")
else:
    print("Odd")


# ============================================================
# 40. Final Beginner Example
# ============================================================

name = input("Enter your name: ")
age = int(input("Enter your age: "))

if age >= 18:
    status = "Adult"
else:
    status = "Minor"

print(f"Hello {name}!")
print(f"You are {age} years old.")
print(f"Status: {status}")
