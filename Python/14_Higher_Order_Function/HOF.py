from functools import reduce


# Higher Order Functions

# A function can be passed as an argument
# A function can return another function
# A function can be assigned to a variable
# A function can be modified


# Function as a Parameter

def sum_numbers(nums):
    return sum(nums)


def higher_order_function(function, lst):
    # function is passed as a parameter
    result = function(lst)
    return result


result = higher_order_function(sum_numbers, [1, 2, 3, 4, 5])
print(result)                                      # 15


# Function as a Return Value

def square(x):
    return x ** 2


def cube(x):
    return x ** 3


def absolute(x):
    if x >= 0:
        return x
    else:
        return -x


def get_function(function_type):
    # Return different functions depending on the input
    if function_type == "square":
        return square
    elif function_type == "cube":
        return cube
    elif function_type == "absolute":
        return absolute


result = get_function("square")
print(result(3))                                   # 9

result = get_function("cube")
print(result(3))                                   # 27

result = get_function("absolute")
print(result(-3))                                  # 3


# Python Closures

# A nested function can access variables
# from its outer/enclosing function.

def add_ten():

    ten = 10

    def add(num):
        return num + ten

    return add


closure_result = add_ten()

print(closure_result(5))                           # 15
print(closure_result(10))                          # 20


# Student example of Closure

def create_student():

    college = "D.Y. Patil College of Engineering and Technology"

    def student_info(name):
        return f"{name} studies at {college}"

    return student_info


student = create_student()

print(student("Gaurav Telange"))
# Gaurav Telange studies at D.Y. Patil College of Engineering and Technology


# Python Decorators

# A decorator adds new functionality to an existing function
# without changing the original function.


def greeting():
    return "Welcome to Python"


def uppercase_decorator(function):

    def wrapper():
        result = function()
        return result.upper()

    return wrapper


g = uppercase_decorator(greeting)

print(g())                                         # WELCOME TO PYTHON


# Using @ decorator syntax

@uppercase_decorator
def welcome():
    return "Welcome Gaurav to Python"


print(welcome())                                   # WELCOME GAURAV TO PYTHON


# Decorator with a Student Example

def student_decorator(function):

    def wrapper():
        result = function()
        return result.upper()

    return wrapper


@student_decorator
def student_name():
    return "Gaurav Telange"


print(student_name())                              # GAURAV TELANGE


# Applying Multiple Decorators

def uppercase_decorator(function):

    def wrapper():
        result = function()
        return result.upper()

    return wrapper


def split_string_decorator(function):

    def wrapper():
        result = function()
        return result.split()

    return wrapper


# Decorators execute from bottom to top.

@split_string_decorator
@uppercase_decorator
def college_message():
    return "Gaurav studies at DYPCET"


print(college_message())
# ['GAURAV', 'STUDIES', 'AT', 'DYP CET']


# Accepting Parameters in Decorator Functions

def decorator_with_parameters(function):

    def wrapper(first_name, last_name, city):

        function(first_name, last_name, city)

        print("I live in {}".format(city))

    return wrapper


@decorator_with_parameters
def print_full_name(first_name, last_name, city):

    print("I am {} {}.".format(first_name, last_name))


print_full_name("Gaurav", "Telange", "Kolhapur")
# I am Gaurav Telange.
# I live in Kolhapur


# Another student example

def student_details_decorator(function):

    def wrapper(name, college):

        function(name, college)

        print("College: {}".format(college))

    return wrapper


@student_details_decorator
def print_student(name, college):

    print("Student: {}".format(name))


print_student(
    "Gaurav Telange",
    "D.Y. Patil College of Engineering and Technology"
)
# Student: Gaurav Telange
# College: D.Y. Patil College of Engineering and Technology


# Built-in Higher Order Functions

# map()
# filter()
# reduce()


# Python - Map Function

# Syntax:
# map(function, iterable)


numbers = [1, 2, 3, 4, 5]


def square_number(x):
    return x ** 2


numbers_squared = map(square_number, numbers)

print(list(numbers_squared))                       # [1, 4, 9, 16, 25]


# map() with lambda

numbers_squared = map(lambda x: x ** 2, numbers)

print(list(numbers_squared))                       # [1, 4, 9, 16, 25]


# Convert strings into integers

numbers_str = ["1", "2", "3", "4", "5"]

numbers_int = map(int, numbers_str)

print(list(numbers_int))                           # [1, 2, 3, 4, 5]


# Change names to uppercase

names = [
    "Gaurav",
    "Rahul",
    "Amit",
    "Priya"
]


def change_to_upper(name):
    return name.upper()


names_upper = map(change_to_upper, names)

print(list(names_upper))
# ['GAURAV', 'RAHUL', 'AMIT', 'PRIYA']


# map() with lambda

names_upper = map(lambda name: name.upper(), names)

print(list(names_upper))
# ['GAURAV', 'RAHUL', 'AMIT', 'PRIYA']


# Student marks example using map()

marks = [75, 82, 68, 91, 88]

updated_marks = map(lambda mark: mark + 5, marks)

print(list(updated_marks))                         # [80, 87, 73, 96, 93]


# Python - Filter Function

# Syntax:
# filter(function, iterable)


# Filter even numbers

numbers = [1, 2, 3, 4, 5, 6]


def is_even(num):

    if num % 2 == 0:
        return True

    return False


even_numbers = filter(is_even, numbers)

print(list(even_numbers))                          # [2, 4, 6]


# Filter odd numbers

def is_odd(num):

    if num % 2 != 0:
        return True

    return False


odd_numbers = filter(is_odd, numbers)

print(list(odd_numbers))                           # [1, 3, 5]


# Filter long names

names = [
    "Gaurav",
    "Rahul",
    "Pranav",
    "Abhishek"
]


def is_name_long(name):

    if len(name) > 7:
        return True

    return False


long_names = filter(is_name_long, names)

print(list(long_names))                            # ['Abhishek']


# Filter students with marks >= 75

marks = [65, 72, 75, 81, 90, 68]

good_marks = filter(lambda mark: mark >= 75, marks)

print(list(good_marks))                            # [75, 81, 90]


# Python - Reduce Function

# reduce() returns one final value.
# It is imported from functools.


numbers = [1, 2, 3, 4, 5]


def add_two_numbers(x, y):
    return x + y


total = reduce(add_two_numbers, numbers)

print(total)                                       # 15


# reduce() with lambda

total = reduce(lambda x, y: x + y, numbers)

print(total)                                       # 15


# Find product of all numbers

product = reduce(lambda x, y: x * y, numbers)

print(product)                                     # 120


# Student marks total

marks = [75, 82, 68, 91, 88]

total_marks = reduce(lambda x, y: x + y, marks)

print(total_marks)                                 # 404


# Student average

average = total_marks / len(marks)

print(average)                                     # 80.8


# Countries list from the provided source

countries = [
    "Estonia",
    "Finland",
    "Sweden",
    "Denmark",
    "Norway",
    "Iceland"
]

names = [
    "Gaurav",
    "Rahul",
    "Amit",
    "Priya"
]

numbers = [
    1, 2, 3, 4, 5,
    6, 7, 8, 9, 10
]


# Exercises: Level 1

# 1. Difference between map, filter and reduce

# map() transforms every item.
# filter() selects items based on a condition.
# reduce() combines all items into one value.


# 2. Difference between Higher Order Function,
# Closure and Decorator

# Higher Order Function:
# A function that takes another function as an argument
# or returns another function.

# Closure:
# An inner function remembers variables from
# its outer function even after the outer function finishes.

# Decorator:
# A function that adds extra functionality to another function.


# 3. Define a function before map, filter or reduce

def double(num):
    return num * 2


doubled_numbers = map(double, numbers)

print(list(doubled_numbers))
# [2, 4, 6, 8, 10, 12, 14, 16, 18, 20]


# 4. Use for loop to print each country

for country in countries:
    print(country)
# Estonia
# Finland
# Sweden
# Denmark
# Norway
# Iceland


# 5. Use for loop to print each name

for name in names:
    print(name)
# Gaurav
# Rahul
# Amit
# Priya


# 6. Use for loop to print each number

for number in numbers:
    print(number)
# 1
# 2
# 3
# 4
# 5
# 6
# 7
# 8
# 9
# 10


# Exercises: Level 2

# 1. Convert every country to uppercase using map()

countries_upper = map(lambda country: country.upper(), countries)

print(list(countries_upper))
# ['ESTONIA', 'FINLAND', 'SWEDEN', 'DENMARK', 'NORWAY', 'ICELAND']


# 2. Square every number using map()

numbers_squared = map(lambda number: number ** 2, numbers)

print(list(numbers_squared))
# [1, 4, 9, 16, 25, 36, 49, 64, 81, 100]


# 3. Convert every name to uppercase

names_upper = map(lambda name: name.upper(), names)

print(list(names_upper))
# ['GAURAV', 'RAHUL', 'AMIT', 'PRIYA']


# 4. Filter countries containing "land"

land_countries = filter(
    lambda country: "land" in country,
    countries
)

print(list(land_countries))
# ['Finland', 'Iceland']


# 5. Filter countries having exactly six characters

six_character_countries = filter(
    lambda country: len(country) == 6,
    countries
)

print(list(six_character_countries))
# ['Sweden', 'Norway']


# 6. Filter countries having six or more characters

long_countries = filter(
    lambda country: len(country) >= 6,
    countries
)

print(list(long_countries))
# ['Estonia', 'Finland', 'Sweden', 'Denmark', 'Norway', 'Iceland']


# 7. Filter countries starting with "E"

countries_starting_e = filter(
    lambda country: country.startswith("E"),
    countries
)

print(list(countries_starting_e))
# ['Estonia']


# 8. Chain map, filter and reduce

# First square the numbers
# Then keep numbers greater than 20
# Finally calculate their sum

result = reduce(
    lambda x, y: x + y,
    filter(
        lambda x: x > 20,
        map(lambda x: x ** 2, numbers)
    )
)

print(result)                                      # 285


# 9. get_string_lists()

def get_string_lists(items):

    return list(
        filter(
            lambda item: isinstance(item, str),
            items
        )
    )


mixed_list = [
    "Gaurav",
    20,
    "Python",
    3.14,
    "DYPCET",
    True
]

string_items = get_string_lists(mixed_list)

print(string_items)
# ['Gaurav', 'Python', 'DYPCET']


# 10. Use reduce to sum all numbers

total = reduce(
    lambda x, y: x + y,
    numbers
)

print(total)                                       # 55


# 11. Use reduce to concatenate countries

country_sentence = reduce(
    lambda x, y: x + ", " + y,
    countries
)

print(country_sentence)
# Estonia, Finland, Sweden, Denmark, Norway, Iceland


# Complete sentence using reduce()

country_sentence = reduce(
    lambda x, y: x + ", " + y,
    countries
)

country_sentence = (
    country_sentence
    + " are north European countries"
)

print(country_sentence)
# Estonia, Finland, Sweden, Denmark, Norway, Iceland are north European countries


# 12. categorize_countries()

def categorize_countries(pattern):

    return list(
        filter(
            lambda country: pattern.lower() in country.lower(),
            countries
        )
    )


print(categorize_countries("land"))
# ['Finland', 'Iceland']

print(categorize_countries("ia"))
# []

print(categorize_countries("island"))
# []

print(categorize_countries("stan"))
# []


# 13. Count countries by starting letter

def count_countries_by_first_letter():

    result = {}

    for country in countries:

        first_letter = country[0]

        if first_letter in result:
            result[first_letter] += 1
        else:
            result[first_letter] = 1

    return result


letter_count = count_countries_by_first_letter()

print(letter_count)
# {'E': 1, 'F': 1, 'S': 1, 'D': 1, 'N': 1, 'I': 1}


# 14. Get first ten countries

# The provided source contains only six countries.
# Therefore, this function returns all available countries
# when fewer than ten are provided.

def get_first_ten_countries():

    return countries[:10]


print(get_first_ten_countries())
# ['Estonia', 'Finland', 'Sweden', 'Denmark', 'Norway', 'Iceland']


# 15. Get last ten countries

# The provided country list contains only six countries.
# Therefore, all six are returned.

def get_last_ten_countries():

    return countries[-10:]


print(get_last_ten_countries())
# ['Estonia', 'Finland', 'Sweden', 'Denmark', 'Norway', 'Iceland']


# Student information using Higher Order Functions

student_info = [
    "Gaurav Telange",
    "Kolhapur",
    "DYPCET"
]


# Convert student information to uppercase

student_upper = map(
    lambda item: item.upper(),
    student_info
)

print(list(student_upper))
# ['GAURAV TELANGE', 'KOLHAPUR', 'DYP CET']


# Filter information containing a space

space_items = filter(
    lambda item: " " in item,
    student_info
)

print(list(space_items))
# ['Gaurav Telange']


# Count total characters in student information

character_count = reduce(
    lambda x, y: x + len(y),
    student_info,
    0
)

print(character_count)                              # 48
