# Empty tuple

empty_tuple = ()
print(empty_tuple)
# Output: ()

empty_tuple = tuple()
print(empty_tuple)
# Output: ()


# Tuple with initial values

fruits = ('banana', 'orange', 'mango', 'lemon')
print(fruits)
# Output: ('banana', 'orange', 'mango', 'lemon')


# Tuple length

print(len(fruits))
# Output: 4


# Accessing tuple items

first_fruit = fruits[0]
second_fruit = fruits[1]

print(first_fruit)
# Output: banana

print(second_fruit)
# Output: orange

last_index = len(fruits) - 1
last_fruit = fruits[last_index]

print(last_fruit)
# Output: lemon


# Negative indexing

first_fruit = fruits[-4]
second_fruit = fruits[-3]
last_fruit = fruits[-1]

print(first_fruit)
# Output: banana

print(second_fruit)
# Output: orange

print(last_fruit)
# Output: lemon


# Slicing tuples

all_fruits = fruits[0:4]
print(all_fruits)
# Output: ('banana', 'orange', 'mango', 'lemon')

all_fruits = fruits[0:]
print(all_fruits)
# Output: ('banana', 'orange', 'mango', 'lemon')

orange_mango = fruits[1:3]
print(orange_mango)
# Output: ('orange', 'mango')

orange_to_rest = fruits[1:]
print(orange_to_rest)
# Output: ('orange', 'mango', 'lemon')


# Slicing using negative indexes

all_fruits = fruits[-4:]
print(all_fruits)
# Output: ('banana', 'orange', 'mango', 'lemon')

orange_mango = fruits[-3:-1]
print(orange_mango)
# Output: ('orange', 'mango')

orange_to_rest = fruits[-3:]
print(orange_to_rest)
# Output: ('orange', 'mango', 'lemon')


# Changing a tuple

# Tuples cannot be changed directly.
# We can convert the tuple into a list, modify it,
# and then convert it back into a tuple.

fruits = ('banana', 'orange', 'mango', 'lemon')

fruits = list(fruits)
fruits[0] = 'apple'

print(fruits)
# Output: ['apple', 'orange', 'mango', 'lemon']

fruits = tuple(fruits)

print(fruits)
# Output: ('apple', 'orange', 'mango', 'lemon')


# Checking an item in a tuple

fruits = ('banana', 'orange', 'mango', 'lemon')

print('orange' in fruits)
# Output: True

print('apple' in fruits)
# Output: False


# Joining tuples

fruits = ('banana', 'orange', 'mango', 'lemon')
vegetables = ('Tomato', 'Potato', 'Cabbage', 'Onion', 'Carrot')

fruits_and_vegetables = fruits + vegetables

print(fruits_and_vegetables)
# Output: ('banana', 'orange', 'mango', 'lemon', 'Tomato', 'Potato', 'Cabbage', 'Onion', 'Carrot')


# Deleting a tuple

fruits = ('banana', 'orange', 'mango', 'lemon')

del fruits

# fruits no longer exists after del


# Level 1 Exercise 1
# Create an empty tuple

empty_tuple = ()

print(empty_tuple)
# Output: ()


# Level 1 Exercise 2
# Create tuples for brothers and sisters

brothers = ('Rahul', 'Amit')
sisters = ('Priya', 'Neha')

print('Brothers:', brothers)
# Output: Brothers: ('Rahul', 'Amit')

print('Sisters:', sisters)
# Output: Sisters: ('Priya', 'Neha')


# Level 1 Exercise 3
# Join brothers and sisters

siblings = brothers + sisters

print('Siblings:', siblings)
# Output: Siblings: ('Rahul', 'Amit', 'Priya', 'Neha')


# Level 1 Exercise 4
# Count the number of siblings

number_of_siblings = len(siblings)

print('Number of siblings:', number_of_siblings)
# Output: Number of siblings: 4


# Level 1 Exercise 5
# Add father and mother

family_members = siblings + ('Father', 'Mother')

print('Family members:', family_members)
# Output: Family members: ('Rahul', 'Amit', 'Priya', 'Neha', 'Father', 'Mother')


# Level 2 Exercise 1
# Unpack siblings and parents

brother1, brother2, sister1, sister2, father, mother = family_members

print('Brother 1:', brother1)
# Output: Brother 1: Rahul

print('Brother 2:', brother2)
# Output: Brother 2: Amit

print('Sister 1:', sister1)
# Output: Sister 1: Priya

print('Sister 2:', sister2)
# Output: Sister 2: Neha

print('Father:', father)
# Output: Father: Father

print('Mother:', mother)
# Output: Mother: Mother


# Level 2 Exercise 2
# Create food tuples

fruits = ('banana', 'orange', 'mango')
vegetables = ('Tomato', 'Potato', 'Carrot')
animal_products = ('milk', 'meat', 'butter')

food_stuff_tp = fruits + vegetables + animal_products

print('Food:', food_stuff_tp)
# Output: Food: ('banana', 'orange', 'mango', 'Tomato', 'Potato', 'Carrot', 'milk', 'meat', 'butter')


# Level 2 Exercise 3
# Change tuple to list

food_stuff_lt = list(food_stuff_tp)

print('Food list:', food_stuff_lt)
# Output: Food list: ['banana', 'orange', 'mango', 'Tomato', 'Potato', 'Carrot', 'milk', 'meat', 'butter']


# Level 2 Exercise 4
# Get the middle item

middle_index = len(food_stuff_tp) // 2
middle_item = food_stuff_tp[middle_index]

print('Middle item:', middle_item)
# Output: Middle item: Potato


# Level 2 Exercise 5
# Get first three and last three items

first_three = food_stuff_lt[:3]
last_three = food_stuff_lt[-3:]

print('First three:', first_three)
# Output: First three: ['banana', 'orange', 'mango']

print('Last three:', last_three)
# Output: Last three: ['milk', 'meat', 'butter']


# Level 2 Exercise 6
# Delete the tuple

del food_stuff_tp

# food_stuff_tp no longer exists


# Level 2 Exercise 7
# Check if an item exists in a tuple

nordic_countries = ('Denmark', 'Finland', 'Iceland', 'Norway', 'Sweden')

print('Estonia' in nordic_countries)
# Output: False

print('Iceland' in nordic_countries)
# Output: True
