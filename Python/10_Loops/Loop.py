# Python Loops

# While Loop

count = 0
while count < 5:
    print(count)                         # 0 1 2 3 4
    count = count + 1


# While loop with else

count = 0
while count < 5:
    print(count)                         # 0 1 2 3 4
    count = count + 1
else:
    print(count)                         # 5


# Break with while loop

count = 0
while count < 5:
    print(count)                         # 0 1 2
    count = count + 1
    if count == 3:
        break


# Continue with while loop

count = 0
while count < 5:
    if count == 3:
        count += 1
        continue
    print(count)                         # 0 1 2 4
    count = count + 1


# For Loop with list

numbers = [0, 1, 2, 3, 4, 5]

for number in numbers:
    print(number)                        # 0 1 2 3 4 5


# For Loop with string

language = 'Python'

for letter in language:
    print(letter)                        # P y t h o n


for i in range(len(language)):
    print(language[i])                   # P y t h o n


# For Loop with tuple

numbers = (0, 1, 2, 3, 4, 5)

for number in numbers:
    print(number)                        # 0 1 2 3 4 5


# For Loop with dictionary

person = {
    'first_name': 'Gaurav',
    'last_name': 'Student',
    'age': 20,
    'country': 'India',
    'is_married': False,
    'skills': ['C++', 'Python', 'DSA'],
    'address': {
        'street': 'Main Street',
        'zipcode': '400001'
    }
}

for key in person:
    print(key)                           # first_name last_name age country is_married skills address

for key, value in person.items():
    print(key, value)                    # key and value of each dictionary item


# For Loop with set

it_companies = {
    'Facebook',
    'Google',
    'Microsoft',
    'Apple',
    'IBM',
    'Oracle',
    'Amazon'
}

for company in it_companies:
    print(company)                       # Company names (order may vary)


# Break with for loop

numbers = (0, 1, 2, 3, 4, 5)

for number in numbers:
    print(number)                        # 0 1 2 3
    if number == 3:
        break


# Continue with for loop

numbers = (0, 1, 2, 3, 4, 5)

for number in numbers:
    print(number)                        # 0 1 2 3 4 5
    if number == 3:
        continue

    print('Next number should be', number + 1) if number != 5 else print("loop's end")
    # Next number should be 1
    # Next number should be 2
    # Next number should be 3
    # loop continues after 3
    # Next number should be 5
    # loop's end

print('outside the loop')                # outside the loop


# Range Function

lst = list(range(11))
print(lst)                               # [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

st = set(range(1, 11))
print(st)                                # {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} (order may vary)

lst = list(range(0, 11, 2))
print(lst)                               # [0, 2, 4, 6, 8, 10]

st = set(range(0, 11, 2))
print(st)                                # {0, 2, 4, 6, 8, 10} (order may vary)

lst = list(range(11, 0, -2))
print(lst)                               # [11, 9, 7, 5, 3, 1]


# For loop with range

for number in range(11):
    print(number)                        # 0 1 2 3 4 5 6 7 8 9 10


# Nested For Loop

person = {
    'first_name': 'Gaurav',
    'last_name': 'Student',
    'age': 20,
    'country': 'India',
    'is_married': False,
    'skills': ['C++', 'Python', 'DSA'],
    'address': {
        'street': 'Main Street',
        'zipcode': '400001'
    }
}

for key in person:
    if key == 'skills':
        for skill in person['skills']:
            print(skill)                 # C++ Python DSA


# For Else

for number in range(11):
    print(number)                        # 0 1 2 3 4 5 6 7 8 9 10
else:
    print('The loop stops at', number)   # The loop stops at 10


# Pass

for number in range(6):
    pass




# 1. Iterate 0 to 10 using for loop

for number in range(11):
    print(number)                        # 0 1 2 3 4 5 6 7 8 9 10


# Iterate 0 to 10 using while loop

number = 0

while number <= 10:
    print(number)                        # 0 1 2 3 4 5 6 7 8 9 10
    number += 1


# 2. Iterate 10 to 0 using for loop

for number in range(10, -1, -1):
    print(number)                        # 10 9 8 7 6 5 4 3 2 1 0


# Iterate 10 to 0 using while loop

number = 10

while number >= 0:
    print(number)                        # 10 9 8 7 6 5 4 3 2 1 0
    number -= 1


# 3. Create a triangle

for number in range(1, 8):
    print('#' * number)                  # #, ##, ###, ####, #####, ######, #######


# 4. Create an 8 x 8 pattern

for i in range(8):
    for j in range(8):
        print('#', end=' ')
    print()                              # 8 rows of # # # # # # # #


# 5. Multiplication pattern

for number in range(11):
    print(number, 'x', number, '=', number * number)
    # 0 x 0 = 0
    # 1 x 1 = 1
    # 2 x 2 = 4
    # 3 x 3 = 9
    # 4 x 4 = 16
    # 5 x 5 = 25
    # 6 x 6 = 36
    # 7 x 7 = 49
    # 8 x 8 = 64
    # 9 x 9 = 81
    # 10 x 10 = 100


# 6. Iterate through the list

languages = ['Python', 'Numpy', 'Pandas', 'Django', 'Flask']

for language in languages:
    print(language)                      # Python Numpy Pandas Django Flask


# 7. Print even numbers from 0 to 100

for number in range(101):
    if number % 2 == 0:
        print(number)                    # 0 2 4 6 ... 100


# 8. Print odd numbers from 0 to 100

for number in range(101):
    if number % 2 != 0:
        print(number)                    # 1 3 5 7 ... 99




# 1. Sum of all numbers from 0 to 100

total = 0

for number in range(101):
    total += number

print('The sum of all numbers is', total)    # The sum of all numbers is 5050


# 2. Sum of all even and odd numbers

even_sum = 0
odd_sum = 0

for number in range(101):
    if number % 2 == 0:
        even_sum += number
    else:
        odd_sum += number

print('The sum of all evens is', even_sum)   # The sum of all evens is 2550
print('The sum of all odds is', odd_sum)     # The sum of all odds is 2500




# 1. Countries containing the word "land"

countries = [
    'Finland',
    'Iceland',
    'Ireland',
    'New Zealand',
    'Poland',
    'Thailand',
    'India',
    'Japan'
]

for country in countries:
    if 'land' in country.lower():
        print(country)                    # Finland Iceland Ireland New Zealand Poland Thailand


# 2. Reverse the fruit list using a loop

fruits = ['banana', 'orange', 'mango', 'lemon']

for i in range(len(fruits) - 1, -1, -1):
    print(fruits[i])                       # lemon mango orange banana


# 3. Countries data exercises

# Total number of languages
# Use countries_data.py for the actual dataset.

countries_data = [
    {
        'name': 'India',
        'languages': ['Hindi', 'English'],
        'population': 1400000000
    },
    {
        'name': 'United States',
        'languages': ['English'],
        'population': 330000000
    },
    {
        'name': 'China',
        'languages': ['Chinese'],
        'population': 1400000000
    }
]

languages = set()

for country in countries_data:
    for language in country['languages']:
        languages.add(language)

print('Total number of languages:', len(languages))    # Total number of languages: 3


# Find the most spoken languages

language_count = {}

for country in countries_data:
    for language in country['languages']:
        language_count[language] = language_count.get(language, 0) + 1

sorted_languages = sorted(
    language_count.items(),
    key=lambda item: item[1],
    reverse=True
)

print(sorted_languages)                                # Languages sorted by frequency


# Find the most populated countries

sorted_countries = sorted(
    countries_data,
    key=lambda country: country['population'],
    reverse=True
)

for country in sorted_countries[:10]:
    print(country['name'], country['population'])
    # Countries sorted by population
