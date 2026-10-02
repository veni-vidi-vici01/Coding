# Functions

# Declaring a function
def function_name():
    pass

# Calling a function
function_name()


# Function without Parameters

def generate_full_name():
    first_name = 'Gaurav'
    last_name = 'Telange'
    space = ' '
    full_name = first_name + space + last_name
    print(full_name)

generate_full_name()                                      # Gaurav Telange


def add_two_numbers():
    num_one = 2
    num_two = 3
    total = num_one + num_two
    print(total)

add_two_numbers()                                         # 5


# Function Returning a Value

def generate_full_name():
    first_name = 'Gaurav'
    last_name = 'Telange'
    space = ' '
    full_name = first_name + space + last_name
    return full_name

print(generate_full_name())                               # Gaurav Telange


def add_two_numbers():
    num_one = 2
    num_two = 3
    total = num_one + num_two
    return total

print(add_two_numbers())                                  # 5


# Function with Parameters

def greetings(name):
    message = name + ', welcome to Python!'
    return message

print(greetings('Gaurav'))                                # Gaurav, welcome to Python!


def add_ten(num):
    ten = 10
    return num + ten

print(add_ten(90))                                        # 100


def square_number(x):
    return x * x

print(square_number(2))                                   # 4


def area_of_circle(r):
    PI = 3.14
    area = PI * r ** 2
    return area

print(area_of_circle(10))                                 # 314.0


def sum_of_numbers(n):
    total = 0

    for i in range(n + 1):
        total += i

    return total

print(sum_of_numbers(10))                                 # 55
print(sum_of_numbers(100))                                # 5050


# Function with Two Parameters

def generate_full_name(first_name, last_name):
    space = ' '
    full_name = first_name + space + last_name
    return full_name

print('Full Name:', generate_full_name('Gaurav', 'Telange'))  # Full Name: Gaurav Telange


def sum_two_numbers(num_one, num_two):
    total = num_one + num_two
    return total

print('Sum:', sum_two_numbers(1, 9))                       # Sum: 10


def calculate_age(current_year, birth_year):
    age = current_year - birth_year
    return age

print('Age:', calculate_age(2026, 2006))                  # Age: 20


def weight_of_object(mass, gravity):
    weight = str(mass * gravity) + ' N'
    return weight

print('Weight:', weight_of_object(100, 9.81))              # Weight: 981.0 N


# Passing Arguments with Key and Value

def print_fullname(firstname, lastname):
    space = ' '
    full_name = firstname + space + lastname
    print(full_name)

print_fullname(firstname='Gaurav', lastname='Telange')    # Gaurav Telange


def add_two_numbers(num1, num2):
    total = num1 + num2
    return total

print(add_two_numbers(num2=3, num1=2))                    # 5


# Returning a String

def print_name(firstname):
    return firstname

print(print_name('Gaurav'))                               # Gaurav


def print_full_name(firstname, lastname):
    space = ' '
    full_name = firstname + space + lastname
    return full_name

print(print_full_name(firstname='Gaurav', lastname='Telange'))  # Gaurav Telange


# Returning a Number

def add_two_numbers(num1, num2):
    total = num1 + num2
    return total

print(add_two_numbers(2, 3))                              # 5


def calculate_age(current_year, birth_year):
    age = current_year - birth_year
    return age

print('Age:', calculate_age(2026, 2006))                  # Age: 20


# Returning a Boolean

def is_even(n):
    if n % 2 == 0:
        return True

    return False

print(is_even(10))                                        # True
print(is_even(7))                                         # False


# Returning a List

def find_even_numbers(n):
    evens = []

    for i in range(n + 1):
        if i % 2 == 0:
            evens.append(i)

    return evens

print(find_even_numbers(10))                              # [0, 2, 4, 6, 8, 10]


# Function with Default Parameters

def greetings(name='Gaurav'):
    message = name + ', welcome to Python!'
    return message

print(greetings())                                        # Gaurav, welcome to Python!
print(greetings('Rahul'))                                 # Rahul, welcome to Python!


def generate_full_name(first_name='Gaurav', last_name='Telange'):
    space = ' '
    full_name = first_name + space + last_name
    return full_name

print(generate_full_name())                               # Gaurav Telange
print(generate_full_name('Rahul', 'Sharma'))              # Rahul Sharma


def calculate_age(birth_year, current_year=2026):
    return current_year - birth_year

print('Age:', calculate_age(2006))                        # Age: 20


def weight_of_object(mass, gravity=9.81):
    weight = str(mass * gravity) + ' N'
    return weight

print('Weight:', weight_of_object(100))                   # Weight: 981.0 N
print('Weight:', weight_of_object(100, 1.62))             # Weight: 162.0 N


# Arbitrary Number of Arguments

def sum_all_nums(*nums):
    total = 0

    for num in nums:
        total += num

    return total

print(sum_all_nums(2, 3, 5))                              # 10
print(sum_all_nums(1, 2, 3, 4, 5))                        # 15


# Default and Arbitrary Number of Parameters

def generate_groups(team, *args):
    print(team)

    for i in args:
        print(i)

generate_groups('Study Group', 'Gaurav', 'Rahul', 'Amit')
# Study Group
# Gaurav
# Rahul
# Amit


# Dictionary Unpacking

def greet(name, location):
    print("Hi", name, "how is the weather in", location)

greet(name='Gaurav', location='Kolhapur')                 # Hi Gaurav how is the weather in Kolhapur

my_dict = {
    "name": "Gaurav",
    "location": "Kolhapur"
}

greet(**my_dict)                                          # Hi Gaurav how is the weather in Kolhapur


# Arbitrary Number of Named Arguments

def arbitrary_named_args(**args):
    print("Number of arguments:", len(args))              # Number of arguments: 3
    print("Arguments:", args)                             # Arguments: {'name': 'Gaurav', 'age': 20, 'city': 'Kolhapur'}

arbitrary_named_args(name='Gaurav', age=20, city='Kolhapur')


# Function as a Parameter of Another Function

def square_number(n):
    return n ** 2

def do_something(f, x):
    return f(x)

print(do_something(square_number, 3))                     # 9


# Exercises: Easy

# 1. Add two numbers
def add_two_numbers_exercise(a, b):
    return a + b

print(add_two_numbers_exercise(5, 7))                     # 12


# 2. Area of a circle
def area_of_circle_exercise(r):
    PI = 3.14
    return PI * r * r

print(area_of_circle_exercise(10))                        # 314.0


# 3. Add all numbers
def add_all_nums(*nums):
    if not all(isinstance(num, (int, float)) for num in nums):
        return "All arguments must be numbers."

    return sum(nums)

print(add_all_nums(1, 2, 3, 4))                           # 10
print(add_all_nums(1, 2, '3'))                            # All arguments must be numbers.


# 4. Celsius to Fahrenheit
def convert_celsius_to_fahrenheit(celsius):
    return (celsius * 9 / 5) + 32

print(convert_celsius_to_fahrenheit(25))                  # 77.0


# 5. Check season
def check_season(month):
    month = month.lower()

    if month in ['september', 'october', 'november']:
        return 'Autumn'
    elif month in ['december', 'january', 'february']:
        return 'Winter'
    elif month in ['march', 'april', 'may']:
        return 'Spring'
    elif month in ['june', 'july', 'august']:
        return 'Summer'

    return 'Invalid month'

print(check_season('April'))                              # Spring


# 6. Calculate slope
def calculate_slope(x1, y1, x2, y2):
    return (y2 - y1) / (x2 - x1)

print(calculate_slope(1, 2, 3, 6))                        # 2.0


# 7. Solve quadratic equation
import math

def solve_quadratic_eqn(a, b, c):
    discriminant = b ** 2 - 4 * a * c

    if discriminant < 0:
        return "No real solutions"

    if discriminant == 0:
        return -b / (2 * a)

    x1 = (-b + math.sqrt(discriminant)) / (2 * a)
    x2 = (-b - math.sqrt(discriminant)) / (2 * a)

    return x1, x2

print(solve_quadratic_eqn(1, -3, 2))                      # (2.0, 1.0)


# 8. Print list
def print_list(items):
    for item in items:
        print(item)

print_list(['C++', 'Python', 'DSA'])
# C++
# Python
# DSA


# 9. Reverse list using loops
def reverse_list(items):
    reversed_items = []

    for i in range(len(items) - 1, -1, -1):
        reversed_items.append(items[i])

    return reversed_items

print(reverse_list([1, 2, 3, 4, 5]))                    # [5, 4, 3, 2, 1]
print(reverse_list(['A', 'B', 'C']))                     # ['C', 'B', 'A']


# 10. Capitalize list items
def capitalize_list_items(items):
    return [item.capitalize() for item in items]

print(capitalize_list_items(['python', 'coding', 'student']))  # ['Python', 'Coding', 'Student']


# 11. Add item
def add_item(items, item):
    items.append(item)
    return items

food_stuff = ['Potato', 'Tomato', 'Mango', 'Milk']
print(add_item(food_stuff, 'Meat'))                       # ['Potato', 'Tomato', 'Mango', 'Milk', 'Meat']

numbers = [2, 3, 7, 9]
print(add_item(numbers, 5))                              # [2, 3, 7, 9, 5]


# 12. Remove item
def remove_item(items, item):
    if item in items:
        items.remove(item)

    return items

food_stuff = ['Potato', 'Tomato', 'Mango', 'Milk']
print(remove_item(food_stuff, 'Mango'))                   # ['Potato', 'Tomato', 'Milk']

numbers = [2, 3, 7, 9]
print(remove_item(numbers, 3))                            # [2, 7, 9]


# 13. Sum of numbers
def sum_of_numbers_exercise(n):
    total = 0

    for i in range(n + 1):
        total += i

    return total

print(sum_of_numbers_exercise(5))                         # 15
print(sum_of_numbers_exercise(10))                        # 55
print(sum_of_numbers_exercise(100))                       # 5050


# 14. Sum of odd numbers
def sum_of_odds(n):
    total = 0

    for i in range(1, n + 1):
        if i % 2 != 0:
            total += i

    return total

print(sum_of_odds(10))                                    # 25


# 15. Sum of even numbers
def sum_of_even(n):
    total = 0

    for i in range(1, n + 1):
        if i % 2 == 0:
            total += i

    return total

print(sum_of_even(10))                                    # 30


# Exercises: Moderate

# 1. Count evens and odds
def evens_and_odds(n):
    even_count = 0
    odd_count = 0

    for i in range(n + 1):
        if i % 2 == 0:
            even_count += 1
        else:
            odd_count += 1

    return odd_count, even_count

odds, evens = evens_and_odds(100)
print("The number of odds are", odds)                     # The number of odds are 50
print("The number of evens are", evens)                  # The number of evens are 51


# 2. Factorial
def factorial(n):
    result = 1

    for i in range(1, n + 1):
        result *= i

    return result

print(factorial(5))                                       # 120


# 3. Check if empty
def is_empty(value):
    return len(value) == 0

print(is_empty([]))                                       # True
print(is_empty([1, 2]))                                   # False


# 4. Mean
def calculate_mean(numbers):
    return sum(numbers) / len(numbers)

print(calculate_mean([10, 20, 30]))                       # 20.0


# 5. Median
def calculate_median(numbers):
    numbers = sorted(numbers)
    n = len(numbers)

    if n % 2 == 0:
        return (numbers[n // 2 - 1] + numbers[n // 2]) / 2

    return numbers[n // 2]

print(calculate_median([5, 1, 3]))                        # 3
print(calculate_median([5, 1, 3, 7]))                     # 4.0


# 6. Mode
def calculate_mode(numbers):
    counts = {}

    for number in numbers:
        counts[number] = counts.get(number, 0) + 1

    max_count = max(counts.values())

    return [number for number, count in counts.items() if count == max_count]

print(calculate_mode([1, 2, 2, 3, 3]))                    # [2, 3]


# 7. Range
def calculate_range(numbers):
    return max(numbers) - min(numbers)

print(calculate_range([10, 4, 8, 20]))                    # 16


# 8. Variance
def calculate_variance(numbers):
    mean = calculate_mean(numbers)

    return sum((number - mean) ** 2 for number in numbers) / len(numbers)

print(calculate_variance([1, 2, 3]))                      # 0.6666666666666666


# 9. Standard deviation
def calculate_std(numbers):
    return calculate_variance(numbers) ** 0.5

print(calculate_std([1, 2, 3]))                           # 0.816496580927726


# 10. Greeting with default argument
def greet(name='Guest'):
    return f'Hello, {name}!'

print(greet())                                            # Hello, Guest!
print(greet('Gaurav'))                                    # Hello, Gaurav!


# 11. Arbitrary named arguments
def show_args(**args):
    result = []

    for key, value in args.items():
        result.append(f'{key}: {value}')

    print('Received:', ', '.join(result))

show_args(name='Gaurav', age=20, city='Kolhapur')         # Received: name: Gaurav, age: 20, city: Kolhapur
show_args(name='Rahul', pet='Fluffy, the bunny')          # Received: name: Rahul, pet: Fluffy, the bunny


# Exercises: Medium

# 1. Check if prime
def is_prime(n):
    if n < 2:
        return False

    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False

    return True

print(is_prime(17))                                       # True
print(is_prime(18))                                       # False


# 2. Check if all items are unique
def are_all_unique(items):
    return len(items) == len(set(items))

print(are_all_unique([1, 2, 3]))                          # True
print(are_all_unique([1, 2, 2]))                          # False


# 3. Check if all items have the same data type
def are_same_type(items):
    if not items:
        return True

    first_type = type(items[0])

    for item in items:
        if type(item) != first_type:
            return False

    return True

print(are_same_type([1, 2, 3]))                            # True
print(are_same_type([1, '2', 3]))                         # False


# 4. Check if a variable name is valid
import keyword

def is_valid_python_variable(name):
    return name.isidentifier() and not keyword.iskeyword(name)

print(is_valid_python_variable('student_name'))           # True
print(is_valid_python_variable('2name'))                   # False
