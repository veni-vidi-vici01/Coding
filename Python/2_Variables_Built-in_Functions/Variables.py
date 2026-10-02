# Creating Variables

first_name = "Gaurav"
last_name = "Telange"
country = "India"
city = "Pune"
age = 20
is_student = True

print(first_name)
print(last_name)
print(country)
print(city)
print(age)
print(is_student)


# Different Types of Variables

name = "Gaurav"                 # String
age = 20                       # Integer
height = 5.8                   # Float
complex_number = 2 + 3j        # Complex
is_student = True              # Boolean

print(name)
print(age)
print(height)
print(complex_number)
print(is_student)


# Checking Variable Types

print(type(name))
print(type(age))
print(type(height))
print(type(complex_number))
print(type(is_student))


# Variables with Collections

skills = ["C", "C++", "Python", "DSA"]

coordinates = (18.52, 73.85)

unique_numbers = {1, 2, 3, 4, 5}

person_info = {
    "name": "Gaurav",
    "age": 20,
    "city": "Pune"
}

print("Skills:", skills)
print("Coordinates:", coordinates)
print("Unique numbers:", unique_numbers)
print("Person information:", person_info)


# Accessing Dictionary Values

print("Name:", person_info["name"])
print("Age:", person_info["age"])
print("City:", person_info["city"])


# Built-in Functions

print("Length of name:", len(name))

numbers = [10, 20, 30, 40, 50]

print("Length:", len(numbers))
print("Maximum:", max(numbers))
print("Minimum:", min(numbers))
print("Sum:", sum(numbers))


# String Built-in Methods

message = "Python Programming"

print(message.upper())
print(message.lower())
print(message.title())

print("First character:", message[0])
print("Last character:", message[-1])


# Multiple Variables

first_name, last_name, country = "Gaurav", "Telange", "India"

print(first_name)
print(last_name)
print(country)


# Multiple Variables with Different Data Types

name, age, height, student = "Gaurav", 20, 5.8, True

print(name)
print(age)
print(height)
print(student)


# Variable Reassignment

age = 20

print("Original age:", age)

age = 21

print("Updated age:", age)


# Variables Can Change Their Type

value = 100

print(value)
print(type(value))

value = "Python"

print(value)
print(type(value))


# Constants

# Python does not have strict constants.
# Uppercase names are conventionally treated as constants.

PI = 3.14159
MAX_SCORE = 100
COLLEGE_NAME = "ABC College"

print(PI)
print(MAX_SCORE)
print(COLLEGE_NAME)


# Swapping Variables

a = 10
b = 20

print("Before swapping:")
print("a =", a)
print("b =", b)

a, b = b, a

print("After swapping:")
print("a =", a)
print("b =", b)


# Getting User Input

name = input("Enter your name: ")

print("Hello", name)


# Input and Type Conversion

age = int(input("Enter your age: "))
height = float(input("Enter your height: "))

print("Age:", age)
print("Height:", height)


# Type Conversion

number_string = "100"

number = int(number_string)

print(number)
print(type(number))

number_float = float(number)

print(number_float)
print(type(number_float))


# Integer to String

age = 20
age_string = str(age)

print(age_string)
print(type(age_string))


# Boolean Conversion

print(bool(1))
print(bool(0))

print(bool("Python"))
print(bool(""))


# String Formatting with f-string

name = "Gaurav"
age = 20
city = "Pune"

print(f"My name is {name}.")
print(f"I am {age} years old.")
print(f"I live in {city}.")


# Using Variables in Calculations

length = 10
width = 5

area = length * width

print("Length:", length)
print("Width:", width)
print("Area:", area)


# Updating Variables

score = 0

score = score + 10
score = score + 20
score = score + 30

print("Final score:", score)


# Shortcut Assignment Operators

number = 10

number += 5
print(number)       # 15

number -= 3
print(number)       # 12

number *= 2
print(number)       # 24

number /= 4
print(number)       # 6.0


# Variable Naming Rules

# Valid variable names

student_name = "Gaurav"
student_age = 20
_marks = 90
marks2 = 95

# Invalid examples

# 2marks = 90          # Cannot start with a number
# student-name = ""    # Hyphen is not allowed
# class = "CSE"        # 'class' is a Python keyword


# Good Naming Practice

# Bad
x = 20

# Better
student_age = 20

print(student_age)


# len() with Different Collections

name = "Gaurav"
skills = ["C++", "Python", "DSA"]
numbers = {10, 20, 30}
student = {
    "name": "Gaurav",
    "age": 20
}

print(len(name))
print(len(skills))
print(len(numbers))
print(len(student))


# Delete a Variable

temporary_value = 100

print(temporary_value)

del temporary_value

# print(temporary_value)  # Error because variable was deleted


# Practice Example - Student Information

student_name = "Gaurav"
student_age = 20
student_course = "Computer Science Engineering"
student_college = "ABC College"
student_marks = 85.5

print("----- Student Information -----")
print(f"Name: {student_name}")
print(f"Age: {student_age}")
print(f"Course: {student_course}")
print(f"College: {student_college}")
print(f"Marks: {student_marks}")


# Practice Example - Simple Calculator

a = 20
b = 10

print("Addition:", a + b)
print("Subtraction:", a - b)
print("Multiplication:", a * b)
print("Division:", a / b)
print("Modulus:", a % b)
print("Power:", a ** b)


# Practice Example - Personal Profile

name = input("Enter your name: ")
age = int(input("Enter your age: "))
city = input("Enter your city: ")
skill = input("Enter your main skill: ")

print("\n----- Profile -----")
print(f"Name: {name}")
print(f"Age: {age}")
print(f"City: {city}")
print(f"Main Skill: {skill}")


# Key Takeaways

# A variable stores a value.

# Examples:
# name = "Gaurav"
# age = 20
# height = 5.8

# Important built-in functions:
# print()
# type()
# len()
# max()
# min()
# sum()
# input()
# int()
# float()
# str()
# bool()

# Important concepts:
# 1. Variables
# 2. Data types
# 3. Type conversion
# 4. Multiple assignment
# 5. Reassignment
# 6. Constants
# 7. User input
# 8. f-strings
# 9. Built-in functions
# 10. Variable naming
