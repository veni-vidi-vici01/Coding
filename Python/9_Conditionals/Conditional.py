# Python Conditionals


# If Condition

a = 3

if a > 0:
    print('A is a positive number')                    # A is a positive number


# If Else

a = 3

if a < 0:
    print('A is a negative number')
else:
    print('A is a positive number')                    # A is a positive number


# If Elif Else

a = 0

if a > 0:
    print('A is a positive number')
elif a < 0:
    print('A is a negative number')
else:
    print('A is zero')                                 # A is zero


# Short Hand

a = 3

print('A is positive') if a > 0 else print('A is negative')  # A is positive


# Nested Conditions

a = 0

if a > 0:
    if a % 2 == 0:
        print('A is a positive and even integer')
    else:
        print('A is a positive number')
elif a == 0:
    print('A is zero')                                 # A is zero
else:
    print('A is a negative number')


# If Condition and Logical Operators

a = 4

if a > 0 and a % 2 == 0:
    print('A is an even and positive integer')         # A is an even and positive integer
elif a > 0 and a % 2 != 0:
    print('A is a positive integer')
elif a == 0:
    print('A is zero')
else:
    print('A is negative')


# If and Or Logical Operators

user = 'student'
access_level = 3

if user == 'admin' or access_level >= 4:
    print('Access granted!')
else:
    print('Access denied!')                            # Access denied!


# Day 9 Exercises - Level 1

# Exercise 1 - Check driving age

age = int(input('Enter your age: '))                    # Example input: 21

if age >= 18:
    print('You are old enough to learn to drive.')     # You are old enough to learn to drive.
else:
    years_left = 18 - age
    print(f'You need {years_left} more years to learn to drive.')  # Depends on input


# Exercise 2 - Compare ages

my_age = 21
your_age = int(input('Enter your age: '))               # Example input: 26

if your_age > my_age:
    difference = your_age - my_age

    if difference == 1:
        print('You are 1 year older than me.')          # You are 1 year older than me.
    else:
        print(f'You are {difference} years older than me.')  # You are 5 years older than me.
elif your_age < my_age:
    difference = my_age - your_age

    if difference == 1:
        print('I am 1 year older than you.')
    else:
        print(f'I am {difference} years older than you.')
else:
    print('We are the same age.')


# Exercise 3 - Compare two numbers

a = int(input('Enter number one: '))                    # Example input: 4
b = int(input('Enter number two: '))                    # Example input: 3

if a > b:
    print(f'{a} is greater than {b}')                  # 4 is greater than 3
elif a < b:
    print(f'{a} is smaller than {b}')
else:
    print(f'{a} is equal to {b}')


# Day 9 Exercises - Level 2

# Exercise 1 - Student Grade

score = int(input('Enter your score: '))                # Example input: 85

if 90 <= score <= 100:
    print('Grade: A')
elif 80 <= score <= 89:
    print('Grade: B')                                   # Grade: B
elif 70 <= score <= 79:
    print('Grade: C')
elif 60 <= score <= 69:
    print('Grade: D')
elif 0 <= score <= 59:
    print('Grade: F')
else:
    print('Invalid score')


# Exercise 2 - Check season

month = input('Enter month: ').strip().capitalize()     # Example input: September

if month in ['September', 'October', 'November']:
    print('The season is Autumn')                       # The season is Autumn
elif month in ['December', 'January', 'February']:
    print('The season is Winter')
elif month in ['March', 'April', 'May']:
    print('The season is Spring')
elif month in ['June', 'July', 'August']:
    print('The season is Summer')
else:
    print('Invalid month')


# Exercise 3 - Check fruit

fruits = ['banana', 'orange', 'mango', 'lemon']

fruit = input('Enter a fruit: ').strip().lower()        # Example input: apple

if fruit in fruits:
    print('That fruit already exists in the list')
else:
    fruits.append(fruit)
    print(fruits)                                      # ['banana', 'orange', 'mango', 'lemon', 'apple']


# Day 9 Exercises - Level 3

# Person dictionary

person = {
    'first_name': 'Gaurav',
    'last_name': 'Telange',
    'age': 21,
    'country': 'India',
    'is_married': False,
    'skills': ['C++', 'Python', 'DSA', 'SQL'],
    'address': {
        'city': 'Pune',
        'state': 'Maharashtra'
    }
}


# Check if the person has skills

if 'skills' in person:
    middle_index = len(person['skills']) // 2
    print(person['skills'][middle_index])              # DSA


# Check if the person has Python skill

if 'skills' in person:
    print('Python' in person['skills'])                # True


# Check the person's developer role

skills = person['skills']

if skills == ['JavaScript', 'React']:
    print('He is a front end developer')
elif 'Node' in skills and 'Python' in skills and 'MongoDB' in skills:
    print('He is a backend developer')
elif 'React' in skills and 'Node' in skills and 'MongoDB' in skills:
    print('He is a fullstack developer')
else:
    print('unknown title')                             # unknown title


# Check if the person is married and lives in India

if person['is_married'] and person['country'] == 'India':
    print('The person is married and lives in India.')
else:
    print('The person is not married or does not live in India.')  # The person is not married or does not live in India.
