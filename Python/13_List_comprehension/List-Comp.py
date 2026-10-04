# List Comprehension

# Syntax:
# [expression for i in iterable if condition]


# Example 1: String to list

language = 'Python'

# One way
lst = list(language)
print(type(lst))                         # <class 'list'>
print(lst)                               # ['P', 'y', 't', 'h', 'o', 'n']

# Using list comprehension
lst = [i for i in language]
print(type(lst))                         # <class 'list'>
print(lst)                               # ['P', 'y', 't', 'h', 'o', 'n']


# Example 2: Generate numbers

numbers = [i for i in range(11)]
print(numbers)                           # [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# Mathematical operation during iteration
squares = [i * i for i in range(11)]
print(squares)                           # [0, 1, 4, 9, 16, 25, 36, 49, 64, 81, 100]

# List of tuples
numbers = [(i, i * i) for i in range(11)]
print(numbers)                           # [(0, 0), (1, 1), (2, 4), (3, 9), (4, 16), (5, 25), (6, 36), (7, 49), (8, 64), (9, 81), (10, 100)]


# List comprehension with if condition

# Generate even numbers
even_numbers = [i for i in range(21) if i % 2 == 0]
print(even_numbers)                      # [0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20]

# Generate odd numbers
odd_numbers = [i for i in range(21) if i % 2 != 0]
print(odd_numbers)                       # [1, 3, 5, 7, 9, 11, 13, 15, 17, 19]

# Filter positive even numbers
numbers = [-8, -7, -3, -1, 0, 1, 3, 4, 5, 7, 6, 8, 10]
positive_even_numbers = [i for i in numbers if i % 2 == 0 and i > 0]
print(positive_even_numbers)             # [4, 6, 8, 10]

# Flatten a two-dimensional list
list_of_lists = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
flattened_list = [number for row in list_of_lists for number in row]
print(flattened_list)                    # [1, 2, 3, 4, 5, 6, 7, 8, 9]


# Lambda Function

# Lambda is a small anonymous function with one expression.

# Syntax:
# lambda parameters: expression


# Named function
def add_two_nums(a, b):
    return a + b


print(add_two_nums(2, 3))                 # 5

# Same function using lambda
add_two_nums = lambda a, b: a + b
print(add_two_nums(2, 3))                 # 5


# Self-invoking lambda function
print((lambda a, b: a + b)(2, 3))         # 5

# Square
square = lambda x: x ** 2
print(square(3))                          # 9

# Cube
cube = lambda x: x ** 3
print(cube(3))                            # 27

# Multiple variables
multiple_variable = lambda a, b, c: a ** 2 - 3 * b + 4 * c
print(multiple_variable(5, 5, 3))         # 22


# Lambda Function Inside Another Function

def power(x):
    return lambda n: x ** n


cube = power(2)(3)
print(cube)                               # 8

two_power_of_five = power(2)(5)
print(two_power_of_five)                  # 32




# Filter negative and zero numbers

numbers = [-4, -3, -2, -1, 0, 2, 4, 6]

negative_and_zero = [i for i in numbers if i <= 0]

print(negative_and_zero)                  # [-4, -3, -2, -1, 0]


# Flatten a list of lists

list_of_lists = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

flattened_list = [number for row in list_of_lists for number in row]

print(flattened_list)                     # [1, 2, 3, 4, 5, 6, 7, 8, 9]


# Create a list of tuples

numbers = [
    (i, 1, i, i ** 2, i ** 3, i ** 4, i ** 5)
    for i in range(11)
]

print(numbers)                            # [(0, 1, 0, 0, 0, 0, 0), (1, 1, 1, 1, 1, 1, 1), (2, 1, 2, 4, 8, 16, 32), (3, 1, 3, 9, 27, 81, 243), (4, 1, 4, 16, 64, 256, 1024), (5, 1, 5, 25, 125, 625, 3125), (6, 1, 6, 36, 216, 1296, 7776), (7, 1, 7, 49, 343, 2401, 16807), (8, 1, 8, 64, 512, 4096, 32768), (9, 1, 9, 81, 729, 6561, 59049), (10, 1, 10, 100, 1000, 10000, 100000)]




# Lambda function for slope

# Slope formula:
# m = (y2 - y1) / (x2 - x1)

slope = lambda x1, y1, x2, y2: (y2 - y1) / (x2 - x1)

print(slope(1, 2, 3, 6))                  # 2.0


# Lambda function for y-intercept

# y-intercept formula:
# b = y - mx

y_intercept = lambda x, y, m: y - (m * x)

print(y_intercept(1, 2, 2))               # 0
