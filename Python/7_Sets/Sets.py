# Python Sets

# Creating an empty set
empty_set = set()
print(empty_set)                                      # set()


# Creating a set with initial items
fruits = {'banana', 'orange', 'mango', 'lemon'}
print(fruits)                                         # {'banana', 'orange', 'mango', 'lemon'} (order may vary)


# Getting set length
print(len(fruits))                                    # 4


# Checking an item
print('mango' in fruits)                              # True
print('apple' in fruits)                              # False


# Adding one item
fruits.add('lime')
print(fruits)                                         # {'banana', 'orange', 'mango', 'lemon', 'lime'} (order may vary)


# Adding multiple items
vegetables = ('tomato', 'potato', 'cabbage', 'onion', 'carrot')
fruits.update(vegetables)
print(fruits)                                         # Fruits and vegetables together (order may vary)


# Removing an item using remove()
fruits.remove('banana')
print(fruits)                                         # Set without 'banana' (order may vary)


# Removing an item using discard()
fruits.discard('apple')
print(fruits)                                         # Set remains unchanged (order may vary)


# Removing an item using pop()
numbers = {1, 2, 3, 4, 5}
removed_item = numbers.pop()
print(removed_item)                                   # One item from the set (not guaranteed)
print(numbers)                                        # Remaining four items (order may vary)


# Clearing a set
fruits.clear()
print(fruits)                                         # set()


# Deleting a set
fruits = {'banana', 'orange', 'mango', 'lemon'}
del fruits
# fruits no longer exists


# Converting a list to a set
fruits = ['banana', 'orange', 'mango', 'lemon', 'orange', 'banana']
fruits = set(fruits)
print(fruits)                                         # {'banana', 'orange', 'mango', 'lemon'} (order may vary)


# Joining sets using union()
fruits = {'banana', 'orange', 'mango', 'lemon'}
vegetables = {'tomato', 'potato', 'cabbage', 'onion', 'carrot'}

print(fruits.union(vegetables))                       # All fruits and vegetables (order may vary)


# Joining sets using |
print(fruits | vegetables)                            # All fruits and vegetables (order may vary)


# Updating a set
fruits.update(vegetables)
print(fruits)                                         # All fruits and vegetables (order may vary)


# Finding intersection
whole_numbers = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
even_numbers = {0, 2, 4, 6, 8, 10}

print(whole_numbers.intersection(even_numbers))       # {0, 2, 4, 6, 8, 10}
print(whole_numbers & even_numbers)                   # {0, 2, 4, 6, 8, 10}


# Finding common characters
python = {'p', 'y', 't', 'h', 'o', 'n'}
dragon = {'d', 'r', 'a', 'g', 'o', 'n'}

print(python.intersection(dragon))                    # {'o', 'n'} (order may vary)
print(python & dragon)                                # {'o', 'n'} (order may vary)


# Checking subset
print(even_numbers.issubset(whole_numbers))           # True
print(whole_numbers.issubset(even_numbers))           # False


# Checking superset
print(whole_numbers.issuperset(even_numbers))         # True
print(even_numbers.issuperset(whole_numbers))         # False


# Checking subset with python and dragon
print(python.issubset(dragon))                         # False


# Finding difference
print(whole_numbers.difference(even_numbers))         # {1, 3, 5, 7, 9} (order may vary)


# Difference between python and dragon
print(python.difference(dragon))                       # {'p', 'y', 't', 'h'} (order may vary)
print(python - dragon)                                # {'p', 'y', 't', 'h'} (order may vary)

print(dragon.difference(python))                       # {'d', 'r', 'a', 'g'} (order may vary)
print(dragon - python)                                # {'d', 'r', 'a', 'g'} (order may vary)


# Finding symmetric difference
st1 = {'item1', 'item2', 'item3', 'item4'}
st2 = {'item2', 'item3'}

print(st2.symmetric_difference(st1))                   # {'item1', 'item4'} (order may vary)
print(st2 ^ st1)                                      # {'item1', 'item4'} (order may vary)


# Symmetric difference with numbers
some_numbers = {1, 2, 3, 4, 5}

print(whole_numbers.symmetric_difference(some_numbers))  # {0, 6, 7, 8, 9, 10} (order may vary)


# Symmetric difference between python and dragon
print(python.symmetric_difference(dragon))             # Characters appearing in only one set (order may vary)
print(python ^ dragon)                                # Characters appearing in only one set (order may vary)


# Checking disjoint sets
even_numbers = {0, 2, 4, 6, 8}
odd_numbers = {1, 3, 5, 7, 9}

print(even_numbers.isdisjoint(odd_numbers))            # True


# Checking non-disjoint sets
print(python.isdisjoint(dragon))                       # False




it_companies = {
    'Facebook',
    'Google',
    'Microsoft',
    'Apple',
    'IBM',
    'Oracle',
    'Amazon'
}

print(len(it_companies))                              # 7


# Add Twitter
it_companies.add('Twitter')
print(it_companies)                                   # IT companies + Twitter (order may vary)


# Add multiple IT companies
it_companies.update(['Netflix', 'Intel', 'Adobe'])
print(it_companies)                                   # IT companies + Netflix + Intel + Adobe (order may vary)


# Remove one company
it_companies.remove('IBM')
print(it_companies)                                   # IT companies without IBM (order may vary)


# Difference between remove() and discard()
print("remove() raises KeyError if item is absent")
# remove() raises KeyError if item is absent

print("discard() does not raise an error if item is absent")
# discard() does not raise an error if item is absent




A = {19, 22, 24, 20, 25, 26}
B = {19, 22, 20, 25, 26, 24, 28, 27}


# Join A and B
print(A.union(B))                                    # {19, 20, 22, 24, 25, 26, 27, 28}


# Find A intersection B
print(A.intersection(B))                              # {19, 20, 22, 24, 25, 26}


# Check if A is subset of B
print(A.issubset(B))                                 # True


# Check if A and B are disjoint
print(A.isdisjoint(B))                               # False


# Join A with B
print(A | B)                                         # {19, 20, 22, 24, 25, 26, 27, 28}


# Join B with A
print(B | A)                                         # {19, 20, 22, 24, 25, 26, 27, 28}


# Symmetric difference between A and B
print(A.symmetric_difference(B))                     # {27, 28}


# Delete the sets completely
del A
del B
# A and B are deleted




ages = [22, 19, 24, 25, 26, 24, 25, 24]

ages_set = set(ages)

print(len(ages))                                     # 8
print(len(ages_set))                                 # 5
print(len(ages) > len(ages_set))                     # True


# Difference between data types
print("String: ordered sequence of characters")
# String: ordered sequence of characters

print("List: ordered and mutable collection")
# List: ordered and mutable collection

print("Tuple: ordered and immutable collection")
# Tuple: ordered and immutable collection

print("Set: unordered collection of unique items")
# Set: unordered collection of unique items


# Count unique words
sentence = "I am a student and I love to learn and improve my skills."

words = sentence.replace('.', '').split()
unique_words = set(words)

print(len(unique_words))                              # 11
print(unique_words)                                   # {'I', 'am', 'a', 'student', 'and', 'love', 'to', 'learn', 'improve', 'my', 'skills'} (order may vary)
