# Empty list
empty_list = []
print(len(empty_list))  # Output: 0


# Lists
fruits = ['banana', 'orange', 'mango', 'lemon']
vegetables = ['tomato', 'potato', 'cabbage', 'onion', 'carrot']
subjects = ['Python', 'C++', 'DSA', 'DBMS']
countries = ['India', 'Japan', 'Germany', 'Canada', 'Australia']

print('Fruits:', fruits)
# Output: Fruits: ['banana', 'orange', 'mango', 'lemon']

print('Number of fruits:', len(fruits))
# Output: Number of fruits: 4

print('Vegetables:', vegetables)
# Output: Vegetables: ['tomato', 'potato', 'cabbage', 'onion', 'carrot']

print('Number of vegetables:', len(vegetables))
# Output: Number of vegetables: 5

print('Subjects:', subjects)
# Output: Subjects: ['Python', 'C++', 'DSA', 'DBMS']

print('Number of subjects:', len(subjects))
# Output: Number of subjects: 4

print('Countries:', countries)
# Output: Countries: ['India', 'Japan', 'Germany', 'Canada', 'Australia']

print('Number of countries:', len(countries))
# Output: Number of countries: 5


# Accessing list items
fruits = ['banana', 'orange', 'mango', 'lemon']

first_fruit = fruits[0]
print(first_fruit)  # Output: banana

second_fruit = fruits[1]
print(second_fruit)  # Output: orange

last_fruit = fruits[3]
print(last_fruit)  # Output: lemon

last_index = len(fruits) - 1
print(fruits[last_index])  # Output: lemon


# Negative indexing
fruits = ['banana', 'orange', 'mango', 'lemon']

last_fruit = fruits[-1]
second_last = fruits[-2]

print(last_fruit)  # Output: lemon
print(second_last)  # Output: mango


# Slicing lists
fruits = ['banana', 'orange', 'mango', 'lemon']

all_fruits = fruits[0:4]
print(all_fruits)
# Output: ['banana', 'orange', 'mango', 'lemon']

all_fruits = fruits[0:]
print(all_fruits)
# Output: ['banana', 'orange', 'mango', 'lemon']

orange_and_mango = fruits[1:3]
print(orange_and_mango)
# Output: ['orange', 'mango']

orange_mango_lemon = fruits[1:]
print(orange_mango_lemon)
# Output: ['orange', 'mango', 'lemon']


# Negative slicing
all_fruits = fruits[-4:]
print(all_fruits)
# Output: ['banana', 'orange', 'mango', 'lemon']

orange_and_mango = fruits[-3:-1]
print(orange_and_mango)
# Output: ['orange', 'mango']

orange_mango_lemon = fruits[-3:]
print(orange_mango_lemon)
# Output: ['orange', 'mango', 'lemon']


# Modifying list items
fruits = ['banana', 'orange', 'mango', 'lemon']

fruits[0] = 'avocado'
print(fruits)
# Output: ['avocado', 'orange', 'mango', 'lemon']

fruits[1] = 'apple'
print(fruits)
# Output: ['avocado', 'apple', 'mango', 'lemon']

fruits[-1] = 'lime'
print(fruits)
# Output: ['avocado', 'apple', 'mango', 'lime']


# Checking items
fruits = ['banana', 'orange', 'mango', 'lemon']

does_exist = 'banana' in fruits
print(does_exist)  # Output: True

does_exist = 'apple' in fruits
print(does_exist)  # Output: False


# Append
fruits = ['banana', 'orange', 'mango', 'lemon']

fruits.append('apple')
print(fruits)
# Output: ['banana', 'orange', 'mango', 'lemon', 'apple']

fruits.append('lime')
print(fruits)
# Output: ['banana', 'orange', 'mango', 'lemon', 'apple', 'lime']


# Insert
fruits = ['banana', 'orange', 'mango', 'lemon']

fruits.insert(2, 'apple')
print(fruits)
# Output: ['banana', 'orange', 'apple', 'mango', 'lemon']

fruits.insert(3, 'lime')
print(fruits)
# Output: ['banana', 'orange', 'apple', 'lime', 'mango', 'lemon']


# Remove
fruits = ['banana', 'orange', 'mango', 'lemon']

fruits.remove('banana')
print(fruits)
# Output: ['orange', 'mango', 'lemon']

fruits.remove('lemon')
print(fruits)
# Output: ['orange', 'mango']


# Pop
fruits = ['banana', 'orange', 'mango', 'lemon']

removed_fruit = fruits.pop()
print(removed_fruit)
# Output: lemon

print(fruits)
# Output: ['banana', 'orange', 'mango']

removed_fruit = fruits.pop(0)
print(removed_fruit)
# Output: banana

print(fruits)
# Output: ['orange', 'mango']


# Del
fruits = ['banana', 'orange', 'mango', 'lemon']

del fruits[0]
print(fruits)
# Output: ['orange', 'mango', 'lemon']

del fruits[1]
print(fruits)
# Output: ['orange', 'lemon']


# Clear
fruits = ['banana', 'orange', 'mango', 'lemon']

fruits.clear()
print(fruits)
# Output: []


# Copy
fruits = ['banana', 'orange', 'mango', 'lemon']

fruits_copy = fruits.copy()
print(fruits_copy)
# Output: ['banana', 'orange', 'mango', 'lemon']


# Joining lists with +
positive_numbers = [1, 2, 3, 4, 5]
zero = [0]
negative_numbers = [-5, -4, -3, -2, -1]

integers = negative_numbers + zero + positive_numbers
print(integers)
# Output: [-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5]

fruits = ['banana', 'orange', 'mango', 'lemon']
vegetables = ['tomato', 'potato', 'cabbage', 'onion', 'carrot']

fruits_and_vegetables = fruits + vegetables
print(fruits_and_vegetables)
# Output: ['banana', 'orange', 'mango', 'lemon', 'tomato', 'potato', 'cabbage', 'onion', 'carrot']


# Joining lists with extend()
num1 = [0, 1, 2, 3]
num2 = [4, 5, 6]

num1.extend(num2)
print('Numbers:', num1)
# Output: Numbers: [0, 1, 2, 3, 4, 5, 6]

negative_numbers = [-5, -4, -3, -2, -1]
zero = [0]
positive_numbers = [1, 2, 3, 4, 5]

negative_numbers.extend(zero)
negative_numbers.extend(positive_numbers)

print('Integers:', negative_numbers)
# Output: Integers: [-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5]

fruits = ['banana', 'orange', 'mango', 'lemon']
vegetables = ['tomato', 'potato', 'cabbage', 'onion', 'carrot']

fruits.extend(vegetables)
print('Fruits and vegetables:', fruits)
# Output: Fruits and vegetables: ['banana', 'orange', 'mango', 'lemon', 'tomato', 'potato', 'cabbage', 'onion', 'carrot']


# Count
fruits = ['banana', 'orange', 'mango', 'lemon']

print(fruits.count('orange'))
# Output: 1

ages = [19, 20, 21, 20, 22, 20, 23]

print(ages.count(20))
# Output: 3


# Index
fruits = ['banana', 'orange', 'mango', 'lemon']

print(fruits.index('orange'))
# Output: 1

ages = [19, 20, 21, 20, 22, 20, 23]

print(ages.index(20))
# Output: 1


# Reverse
fruits = ['banana', 'orange', 'mango', 'lemon']

fruits.reverse()
print(fruits)
# Output: ['lemon', 'mango', 'orange', 'banana']

ages = [19, 20, 21, 20, 22, 20, 23]

ages.reverse()
print(ages)
# Output: [23, 20, 22, 20, 21, 20, 19]


# Sort
fruits = ['banana', 'orange', 'mango', 'lemon']

fruits.sort()
print(fruits)
# Output: ['banana', 'lemon', 'mango', 'orange']

fruits.sort(reverse=True)
print(fruits)
# Output: ['orange', 'mango', 'lemon', 'banana']

ages = [19, 20, 21, 20, 22, 20, 23]

ages.sort()
print(ages)
# Output: [19, 20, 20, 20, 21, 22, 23]

ages.sort(reverse=True)
print(ages)
# Output: [23, 22, 21, 20, 20, 20, 19]


# Student practice
student = ['Gaurav', 'CSE', 3, 'Python']

print(student)
# Output: ['Gaurav', 'CSE', 3, 'Python']

print(student[0])
# Output: Gaurav

print(student[1])
# Output: CSE

print(student[2])
# Output: 3

print(student[3])
# Output: Python
