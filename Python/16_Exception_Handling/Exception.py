# Exception Handling

# Python uses try and except to handle errors gracefully.
# Exception handling prevents the program from crashing.


# Try and Except

try:
    print(10 + "5")
except:
    print("Something went wrong")                 # Something went wrong


# Handling a specific error

try:
    name = "Gaurav Telange"
    year_born = "2006"

    age = 2026 - year_born

    print(f"You are {name}. And your age is {age}.")
except:
    print("Something went wrong")                 # Something went wrong


# Handling different types of errors

try:
    name = input("Enter your name: ")
    year_born = input("Year you were born: ")

    age = 2026 - year_born

    print(f"You are {name}. And your age is {age}.")

except TypeError:
    print("Type error occurred")                  # Type error occurred

except ValueError:
    print("Value error occurred")                 # Value error occurred

except ZeroDivisionError:
    print("Zero division error occurred")         # Zero division error occurred


# Correcting the previous example

try:
    name = "Gaurav Telange"
    year_born = "2006"

    age = 2026 - int(year_born)

    print(f"You are {name}. And your age is {age}.")
except TypeError:
    print("Type error occurred")
except ValueError:
    print("Value error occurred")
except ZeroDivisionError:
    print("Zero division error occurred")
else:
    print("I usually run with the try block")     # I usually run with the try block
finally:
    print("I always run.")                        # I always run.


# Using Exception as e

try:
    name = "Gaurav Telange"
    year_born = "2006"

    age = 2026 - year_born

    print(f"You are {name}. And your age is {age}.")

except Exception as e:
    print(e)                                      # unsupported operand type(s) for -: 'int' and 'str'


# Exception Handling with Student Information

try:
    student_name = "Gaurav Telange"
    age = int("20")

    print(f"Student: {student_name}")              # Student: Gaurav Telange
    print(f"Age: {age}")                           # Age: 20

except ValueError:
    print("Please enter a valid age.")

finally:
    print("Student information processed.")        # Student information processed.


# Packing and Unpacking Arguments in Python

# We use:
# *  -> for tuples/lists
# ** -> for dictionaries


# Unpacking Lists

def sum_of_five_nums(a, b, c, d, e):
    return a + b + c + d + e


lst = [1, 2, 3, 4, 5]

# Without unpacking, this would cause an error:
# sum_of_five_nums(lst)

# *lst unpacks the list into separate arguments.
print(sum_of_five_nums(*lst))                      # 15


# Unpacking with range()

numbers = range(2, 7)

print(list(numbers))                               # [2, 3, 4, 5, 6]

args = [2, 7]

numbers = range(*args)

print(list(numbers))                               # [2, 3, 4, 5, 6]


# Unpacking a list

countries = [
    "Finland",
    "Sweden",
    "Norway",
    "Denmark",
    "Iceland"
]

fin, sw, nor, *rest = countries

print(fin, sw, nor, rest)
# Finland Sweden Norway ['Denmark', 'Iceland']


# Another unpacking example

numbers = [1, 2, 3, 4, 5, 6, 7]

one, *middle, last = numbers

print(one, middle, last)                           # 1 [2, 3, 4, 5, 6] 7


# Student Information using Unpacking

student_details = [
    "Gaurav Telange",
    "DYPCET",
    "Kolhapur"
]

student_name, college, city = student_details

print(student_name)                                # Gaurav Telange
print(college)                                     # DYPCET
print(city)                                        # Kolhapur


# Unpacking Dictionaries

def unpacking_person_info(name, country, city, age):
    return f"{name} lives in {country}, {city}. He is {age} years old."


student = {
    "name": "Gaurav Telange",
    "country": "India",
    "city": "Kolhapur",
    "age": 20
}

print(unpacking_person_info(**student))
# Gaurav Telange lives in India, Kolhapur. He is 20 years old.


# Packing

# Sometimes we do not know how many arguments
# will be passed to a function.
# *args allows a function to accept many arguments.


# Packing Lists / Arguments

def sum_all(*args):

    total = 0

    for number in args:
        total += number

    return total


print(sum_all(1, 2, 3))                             # 6
print(sum_all(1, 2, 3, 4, 5, 6, 7))              # 28


# Packing Dictionaries

def packing_person_info(**kwargs):

    # kwargs is a dictionary

    for key in kwargs:
        print(f"{key} = {kwargs[key]}")

    return kwargs


print(
    packing_person_info(
        name="Gaurav Telange",
        college="DYPCET",
        city="Kolhapur",
        age=20
    )
)
# name = Gaurav Telange
# college = DYPCET
# city = Kolhapur
# age = 20
# {'name': 'Gaurav Telange', 'college': 'DYPCET', 'city': 'Kolhapur', 'age': 20}


# Student information using **kwargs

def student_information(**details):

    for key, value in details.items():
        print(f"{key}: {value}")

    return details


print(
    student_information(
        name="Gaurav Telange",
        age=20,
        college="D.Y. Patil College of Engineering and Technology",
        city="Kolhapur"
    )
)
# name: Gaurav Telange
# age: 20
# college: D.Y. Patil College of Engineering and Technology
# city: Kolhapur
# {'name': 'Gaurav Telange', 'age': 20, 'college': 'D.Y. Patil College of Engineering and Technology', 'city': 'Kolhapur'}


# Spreading in Python

# * can spread/unpack elements from lists or tuples.


lst_one = [1, 2, 3]

lst_two = [4, 5, 6, 7]

lst = [0, *lst_one, *lst_two]

print(lst)                                         # [0, 1, 2, 3, 4, 5, 6, 7]


# Spreading country lists

country_lst_one = [
    "India",
    "Finland",
    "Sweden"
]

country_lst_two = [
    "Norway",
    "Denmark"
]

countries = [
    *country_lst_one,
    *country_lst_two
]

print(countries)
# ['India', 'Finland', 'Sweden', 'Norway', 'Denmark']


# Student information using spreading

basic_info = [
    "Gaurav Telange",
    20
]

location_info = [
    "Kolhapur",
    "India"
]

student_info = [
    *basic_info,
    *location_info
]

print(student_info)
# ['Gaurav Telange', 20, 'Kolhapur', 'India']


# Enumerate

# enumerate() gives both:
# index and item


for index, item in enumerate([20, 30, 40]):
    print(index, item)
# 0 20
# 1 30
# 2 40


# Enumerate countries

countries = [
    "India",
    "Finland",
    "Sweden",
    "Norway",
    "Denmark"
]

for index, country in enumerate(countries):

    if country == "India":
        print(
            f"The country {country} has been found at index {index}"
        )
        # The country India has been found at index 0


# Enumerate student information

student_info = [
    "Gaurav Telange",
    "20",
    "DYPCET",
    "Kolhapur"
]

for index, information in enumerate(student_info):

    print(index, information)
# 0 Gaurav Telange
# 1 20
# 2 DYPCET
# 3 Kolhapur


# Zip

# zip() combines two or more lists
# element by element.


fruits = [
    "banana",
    "orange",
    "mango",
    "lemon",
    "lime"
]

vegetables = [
    "Tomato",
    "Potato",
    "Cabbage",
    "Onion",
    "Carrot"
]

fruits_and_vegetables = []

for fruit, vegetable in zip(fruits, vegetables):

    fruits_and_vegetables.append({
        "fruit": fruit,
        "vegetable": vegetable
    })


print(fruits_and_vegetables)
# [
# {'fruit': 'banana', 'vegetable': 'Tomato'},
# {'fruit': 'orange', 'vegetable': 'Potato'},
# {'fruit': 'mango', 'vegetable': 'Cabbage'},
# {'fruit': 'lemon', 'vegetable': 'Onion'},
# {'fruit': 'lime', 'vegetable': 'Carrot'}
# ]


# Zip with student information

student_names = [
    "Gaurav",
    "Rahul",
    "Amit"
]

student_ages = [
    20,
    21,
    20
]

students = []

for name, age in zip(student_names, student_ages):

    students.append({
        "name": name,
        "age": age
    })


print(students)
# [
# {'name': 'Gaurav', 'age': 20},
# {'name': 'Rahul', 'age': 21},
# {'name': 'Amit', 'age': 20}
# ]


# Day 17 Exercise

names = [
    "Finland",
    "Sweden",
    "Norway",
    "Denmark",
    "Iceland",
    "Estonia",
    "Russia"
]


# Unpack the first five countries
# Store Estonia and Russia separately.

nordic_countries = names[:5]
es = names[5]
ru = names[6]

print(nordic_countries)
# ['Finland', 'Sweden', 'Norway', 'Denmark', 'Iceland']

print(es)                                         # Estonia

print(ru)                                         # Russia


# Same exercise using unpacking

fin, sw, nor, den, ice, es, ru = names

nordic_countries = [
    fin,
    sw,
    nor,
    den,
    ice
]

print(nordic_countries)
# ['Finland', 'Sweden', 'Norway', 'Denmark', 'Iceland']

print(es)                                         # Estonia

print(ru)                                         # Russia
