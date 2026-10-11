# Python Dictionaries

# Creating an empty dictionary
empty_dict = {}
print(empty_dict)                                      # {}


# Dictionary with data values
dct = {
    'key1': 'value1',
    'key2': 'value2',
    'key3': 'value3',
    'key4': 'value4'
}

print(dct)                                             # {'key1': 'value1', 'key2': 'value2', 'key3': 'value3', 'key4': 'value4'}


# Dictionary with different data types
student = {
    'first_name': 'Gaurav',
    'last_name': 'Telange',
    'age': 20,
    'country': 'India',
    'is_married': False,
    'skills': ['C++', 'Python', 'DSA', 'SQL'],
    'address': {
        'city': 'Pune',
        'state': 'Maharashtra'
    }
}

print(student)                                         # {'first_name': 'Gaurav', 'last_name': 'Telange', 'age': 20, 'country': 'India', 'is_married': False, 'skills': ['C++', 'Python', 'DSA', 'SQL'], 'address': {'city': 'Pune', 'state': 'Maharashtra'}}


# Dictionary Length
print(len(student))                                    # 7


# Accessing Dictionary Items
print(student['first_name'])                            # Gaurav
print(student['country'])                               # India
print(student['skills'])                               # ['C++', 'Python', 'DSA', 'SQL']
print(student['skills'][0])                             # C++
print(student['address']['city'])                       # Pune


# Accessing an existing key using get()
print(student.get('first_name'))                       # Gaurav
print(student.get('country'))                          # India
print(student.get('skills'))                           # ['C++', 'Python', 'DSA', 'SQL']
print(student.get('city'))                             # None


# Adding Items to a Dictionary
student['job_title'] = 'Software Engineer'
student['skills'].append('Java')

print(student)                                         # Dictionary with job_title and Java added


# Modifying Items in a Dictionary
student['first_name'] = 'Rahul'
student['age'] = 22

print(student['first_name'])                           # Rahul
print(student['age'])                                  # 22


# Checking Keys in a Dictionary
print('country' in student)                            # True
print('phone' in student)                              # False


# Removing an item using pop()
student.pop('job_title')
print(student)                                         # Dictionary without job_title


# Removing the last item using popitem()
student.popitem()
print(student)                                         # Dictionary after removing the last item


# Removing an item using del
del student['is_married']
print(student)                                         # Dictionary without is_married


# Changing Dictionary to a List of Items
dct = {
    'key1': 'value1',
    'key2': 'value2',
    'key3': 'value3',
    'key4': 'value4'
}

print(dct.items())                                     # dict_items([('key1', 'value1'), ('key2', 'value2'), ('key3', 'value3'), ('key4', 'value4')])


# Clearing a Dictionary
dct.clear()
print(dct)                                             # {}


# Deleting a Dictionary
dct = {
    'key1': 'value1',
    'key2': 'value2',
    'key3': 'value3',
    'key4': 'value4'
}

del dct
# dct no longer exists


# Copying a Dictionary
dct = {
    'key1': 'value1',
    'key2': 'value2',
    'key3': 'value3',
    'key4': 'value4'
}

dct_copy = dct.copy()

print(dct_copy)                                       # {'key1': 'value1', 'key2': 'value2', 'key3': 'value3', 'key4': 'value4'}


# Getting Dictionary Keys
keys = dct.keys()

print(keys)                                           # dict_keys(['key1', 'key2', 'key3', 'key4'])


# Getting Dictionary Values
values = dct.values()

print(values)                                         # dict_values(['value1', 'value2', 'value3', 'value4'])


# Day 8 Exercises - Level 1

# 1. Create an empty dictionary called dog
dog = {}

print(dog)                                            # {}


# 2. Add name, color, breed, legs and age
dog['name'] = 'Bruno'
dog['color'] = 'Brown'
dog['breed'] = 'Labrador'
dog['legs'] = 4
dog['age'] = 3

print(dog)                                            # {'name': 'Bruno', 'color': 'Brown', 'breed': 'Labrador', 'legs': 4, 'age': 3}


# 3. Create a student dictionary
student = {
    'first_name': 'Gaurav',
    'last_name': 'Telange',
    'gender': 'Male',
    'age': 20,
    'marital_status': 'Single',
    'skills': ['C++', 'Python'],
    'country': 'India',
    'city': 'Kolhapur',
    'address': 'Kasba Bawda'
}

print(student)                                        # Student dictionary


# 4. Get the length of the student dictionary
print(len(student))                                   # 9


# 5. Get the value of skills and check the data type
print(student['skills'])                              # ['C++', 'Python']
print(type(student['skills']))                        # <class 'list'>


# 6. Add one or two skills
student['skills'].append('DSA')
student['skills'].append('SQL')

print(student['skills'])                              # ['C++', 'Python', 'DSA', 'SQL']


# 7. Get dictionary keys as a list
print(list(student.keys()))                            # ['first_name', 'last_name', 'gender', 'age', 'marital_status', 'skills', 'country', 'city', 'address']


# 8. Get dictionary values as a list
print(list(student.values()))                          # ['Gaurav', 'Telange', 'Male', 21, 'Single', ['C++', 'Python', 'DSA', 'SQL'], 'India', 'Kolhapur', 'Kasba Bawda']


# 9. Change dictionary to a list of tuples
print(list(student.items()))                           # [('first_name', 'Gaurav'), ('last_name', 'Telange'), ('gender', 'Male'), ('age', 20), ('marital_status', 'Single'), ('skills', ['C++', 'Python', 'DSA', 'SQL']), ('country', 'India'), ('city', 'Kolhapur'), ('address', 'Kasba Bawda')]


# 10. Delete one item from the dictionary
del student['address']

print(student)                                        # Student dictionary without address


# 11. Delete one of the dictionaries
del dog
# dog no longer exists
