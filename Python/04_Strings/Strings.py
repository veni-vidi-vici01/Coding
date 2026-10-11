# Single character string
letter = 'G'
print(letter)
print(len(letter))

# String
greeting = 'Hello, Gaurav!'
print(greeting)
print(len(greeting))

message = "I am learning Python as a CSE student."
print(message)

# Multiline string
multiline_string = '''I am a CSE student.
I am learning Python and practicing programming.
I want to improve my coding skills.'''
print(multiline_string)

multiline_string = """I am working on my Python practice.
I am learning strings and their methods.
Practice helps me improve my programming skills."""
print(multiline_string)

# String concatenation
first_name = 'Gaurav'
last_name = 'Telange'
space = ' '

full_name = first_name + space + last_name
print(full_name)

print(len(first_name))
print(len(last_name))
print(len(first_name) > len(last_name))
print(len(full_name))

# Unpacking characters
language = 'Python'
a, b, c, d, e, f = language

print(a)
print(b)
print(c)
print(d)
print(e)
print(f)

# Accessing characters by index
language = 'Python'

first_letter = language[0]
print(first_letter)

second_letter = language[1]
print(second_letter)

last_index = len(language) - 1
last_letter = language[last_index]
print(last_letter)

# Negative indexing
language = 'Python'

last_letter = language[-1]
print(last_letter)

second_last = language[-2]
print(second_last)

# Slicing
language = 'Python'

first_three = language[0:3]
print(first_three)

last_three = language[3:6]
print(last_three)

last_three = language[-3:]
print(last_three)

last_three = language[3:]
print(last_three)

# Skipping characters
language = 'Python'

pto = language[0:6:2]
print(pto)

# Escape sequences
print('I am learning Python.\nI practice coding every day.')

print('Topic\tDay\tStatus')
print('Python\t1\tDone')
print('Strings\t2\tDone')
print('Practice\t3\tPending')

print('This is a back slash symbol (\\)')
print('The first program is usually "Hello, World!"')

# String methods

# capitalize()
text = 'python programming'
print(text.capitalize())

# count()
text = 'python programming'
print(text.count('p'))
print(text.count('o'))
print(text.count('python'))

# endswith()
text = 'python programming'
print(text.endswith('ing'))
print(text.endswith('python'))

# expandtabs()
text = 'Name\tCourse\tYear'
print(text.expandtabs())
print(text.expandtabs(10))

# find()
text = 'python programming'
print(text.find('p'))
print(text.find('program'))

# format()
name = 'Gaurav'
course = 'Computer Science'
year = 3

sentence = 'My name is {}. I am studying {} and I am in year {}.'.format(
    name, course, year
)

print(sentence)

radius = 10
pi = 3.14
area = pi * radius ** 2

result = 'The area of a circle with radius {} is {}'.format(
    radius, area
)

print(result)

# index()
text = 'python programming'
print(text.index('p'))
print(text.index('program'))

# isalnum()
text = 'Gaurav123'
print(text.isalnum())

text = 'Gaurav 123'
print(text.isalnum())

text = 'PythonProgramming'
print(text.isalnum())

# isalpha()
text = 'Gaurav'
print(text.isalpha())

text = 'Gaurav123'
print(text.isalpha())

# isdecimal()
number = '123'
print(number.isdecimal())

number = '12.5'
print(number.isdecimal())

# isdigit()
text = 'Python'
print(text.isdigit())

number = '12345'
print(number.isdigit())

# isidentifier()
variable_name = 'student_name'
print(variable_name.isidentifier())

variable_name = '123student'
print(variable_name.isidentifier())

# islower()
text = 'python programming'
print(text.islower())

text = 'Python Programming'
print(text.islower())

# isupper()
text = 'python programming'
print(text.isupper())

text = 'PYTHON PROGRAMMING'
print(text.isupper())

# isnumeric()
number = '123'
print(number.isnumeric())

text = 'python'
print(text.isnumeric())

# join()
subjects = ['Python', 'C++', 'DSA', 'DBMS']

result = ', '.join(subjects)
print(result)

# strip()
text = '   Python programming   '
print(text.strip())

# replace()
text = 'I am learning Java'
print(text.replace('Java', 'Python'))

# split()
text = 'I am learning Python'
print(text.split())

# title()
text = 'python programming'
print(text.title())

# swapcase()
text = 'python programming'
print(text.swapcase())

text = 'Python Programming'
print(text.swapcase())

# startswith()
text = 'Python programming'
print(text.startswith('Python'))

text = 'C++ programming'
print(text.startswith('Python'))
