import re


# Regular Expressions

# RegEx is used to find patterns in text.
# Python provides the 're' module for Regular Expressions.


# 1. The re Module

print(re)                                      # <module 're' ...>


# 2. re.match()

# match() checks only at the beginning of the string.

txt = "I love to learn Python and JavaScript"

match = re.match("I love to learn", txt, re.I)

print(match)                                   # <re.Match object ...>

# span() gives the starting and ending positions.
span = match.span()

print(span)                                    # (0, 15)

start, end = span

print(start, end)                              # 0 15

substring = txt[start:end]

print(substring)                               # I love to learn


# match() returns None if the pattern is not at the beginning.

match = re.match("I like Python", txt, re.I)

print(match)                                   # None


# 3. re.search()

# search() looks for the pattern anywhere in the string.

txt = """
Gaurav is a CSE student at DYPCET.
He lives in Kolhapur and is preparing for SDE interviews.
"""

match = re.search("DYPCET", txt, re.I)

print(match)                                   # <re.Match object ...>

span = match.span()

print(span)                                    # Position of DYPCET

start, end = span

print(start, end)                              # Starting and ending position

substring = txt[start:end]

print(substring)                               # DYPCET


# 4. re.findall()

# findall() returns all matching values as a list.

txt = """
Gaurav is learning Python.
Gaurav is also practicing Python.
"""

matches = re.findall("Gaurav", txt)

print(matches)                                 # ['Gaurav', 'Gaurav']

matches = re.findall("Python", txt)

print(matches)                                 # ['Python', 'Python']


# Case-insensitive search

txt = "Python is easy. python is powerful."

matches = re.findall("python", txt, re.I)

print(matches)                                 # ['Python', 'python']


# 5. Using | OR operator

txt = "Python and JavaScript are programming languages."

matches = re.findall("Python|JavaScript", txt)

print(matches)                                 # ['Python', 'JavaScript']


# 6. Using [] character set

txt = "Python python PYTHON"

matches = re.findall("[Pp]ython", txt)

print(matches)                                 # ['Python', 'python']


# 7. Replacing Text Using re.sub()

txt = "Gaurav is learning Python. Python is useful for SDE preparation."

match_replaced = re.sub(
    "Python",
    "C++",
    txt
)

print(match_replaced)
# Gaurav is learning C++. C++ is useful for SDE preparation.


# Case-insensitive replacement

txt = "Python python PYTHON"

match_replaced = re.sub(
    "python",
    "C++",
    txt,
    flags=re.I
)

print(match_replaced)                          # C++ C++ C++


# 8. Removing unwanted characters

txt = """
G%a%u%r%a%v T%e%l%a%n%g%e
D%Y%P%C%E%T
K%o%l%h%a%p%u%r
"""

clean_text = re.sub("%", "", txt)

print(clean_text)
# Gaurav Telange
# DYPCET
# Kolhapur


# 9. Splitting Text Using re.split()

txt = """Gaurav is a CSE student.
He studies at DYPCET.
He lives in Kolhapur."""

lines = re.split("\n", txt)

print(lines)
# ['Gaurav is a CSE student.',
#  'He studies at DYPCET.',
#  'He lives in Kolhapur.']


# 10. Writing RegEx Patterns

regex_pattern = r"Python"

txt = "Python is a programming language. python is also popular."

matches = re.findall(regex_pattern, txt)

print(matches)                                 # ['Python']


# Case-insensitive pattern

matches = re.findall(
    regex_pattern,
    txt,
    re.I
)

print(matches)                                 # ['Python', 'python']


# 11. Character Set

# [a-z] = lowercase letters
# [A-Z] = uppercase letters
# [0-9] = numbers
# [A-Za-z0-9] = letters and numbers

txt = "Gaurav20 DYPCET Kolhapur"

regex_pattern = r"[A-Z]"

matches = re.findall(regex_pattern, txt)

print(matches)                                 # ['G', 'D', 'Y', 'P', 'C', 'E', 'T', 'K']


# 12. Digits using \d

txt = "Gaurav is 20 years old and studies in 3rd year."

regex_pattern = r"\d"

matches = re.findall(regex_pattern, txt)

print(matches)                                 # ['2', '0', '3']


# 13. One or More Times +

# \d+ finds complete numbers instead of individual digits.

regex_pattern = r"\d+"

matches = re.findall(regex_pattern, txt)

print(matches)                                 # ['20', '3']


# 14. Period .

# . matches any character except newline.

txt = "Gaurav is learning Python"

regex_pattern = r"P."

matches = re.findall(regex_pattern, txt)

print(matches)                                 # ['Py']


# 15. Zero or More Times *

txt = "Python Py P"

regex_pattern = r"Py.*"

matches = re.findall(regex_pattern, txt)

print(matches)                                 # ['Python Py P']


# 16. Zero or One Time ?

txt = "email e-mail Email E-mail"

regex_pattern = r"[Ee]-?mail"

matches = re.findall(regex_pattern, txt)

print(matches)                                 # ['email', 'e-mail', 'Email', 'E-mail']


# 17. Quantifiers {}

txt = "Gaurav 2026 DYPCET 12345"

# Exactly four digits
regex_pattern = r"\d{4}"

matches = re.findall(regex_pattern, txt)

print(matches)                                 # ['2026']


# One to four digits
regex_pattern = r"\d{1,4}"

matches = re.findall(regex_pattern, txt)

print(matches)                                 # ['2026', '1234', '5']


# 18. Starts With ^

txt = "Gaurav is a CSE student."

regex_pattern = r"^Gaurav"

matches = re.findall(regex_pattern, txt)

print(matches)                                 # ['Gaurav']


# 19. Ends With $

txt = "Gaurav lives in Kolhapur"

regex_pattern = r"Kolhapur$"

matches = re.findall(regex_pattern, txt)

print(matches)                                 # ['Kolhapur']


# 20. Negation [^]

# Find characters that are not letters or spaces.

txt = "Gaurav20, DYPCET!"

regex_pattern = r"[^A-Za-z ]+"

matches = re.findall(regex_pattern, txt)

print(matches)                                 # ['20,', '!']


# 21. Student Information with RegEx

student_info = """
Name: Gaurav Telange
Age: 20
College: D.Y. Patil College of Engineering and Technology
City: Kolhapur
"""

# Find the age
age = re.findall(r"\d+", student_info)

print(age)                                     # ['20']


# Find capital letters
capital_letters = re.findall(r"[A-Z]", student_info)

print(capital_letters)                         # Capital letters from student information


# Find city
city = re.findall(r"Kolhapur", student_info)

print(city)                                    # ['Kolhapur']


# 22. Day 18 Exercises


# Exercise 1
# Find the most frequent word in the paragraph.

paragraph = """
I love learning. If you do not love learning,
what else can you love?
I love Python. If you do not love something
which can help you develop an application,
what else can you love?
"""

# Convert all words to lowercase.
words = re.findall(r"[A-Za-z]+", paragraph.lower())

word_count = {}

for word in words:
    word_count[word] = word_count.get(word, 0) + 1

most_frequent = sorted(
    word_count.items(),
    key=lambda item: item[1],
    reverse=True
)

print(most_frequent[:3])
# [('love', 4), ('you', 3), ('learning', 2)]


# Exercise 2
# Find numbers representing positions on the x-axis.

text = """
The positions of particles are -12, -4, -3, -1, 0, 4 and 8
on the horizontal x-axis.
"""

points = re.findall(r"-?\d+", text)

print(points)                                  # ['-12', '-4', '-3', '-1', '0', '4', '8']

# Convert strings to integers.
points = [int(point) for point in points]

print(points)                                  # [-12, -4, -3, -1, 0, 4, 8]

# Find the two furthest points.
distance = max(points) - min(points)

print(distance)                                # 20


# Exercise 3
# Check whether a string is a valid Python variable.

def is_valid_variable(variable):

    # A Python variable:
    # - starts with a letter or underscore
    # - can contain letters, numbers and underscores
    # - cannot contain spaces or hyphens

    pattern = r"^[A-Za-z_][A-Za-z0-9_]*$"

    return bool(re.match(pattern, variable))


print(is_valid_variable("first_name"))         # True
print(is_valid_variable("first-name"))         # False
print(is_valid_variable("1first_name"))        # False
print(is_valid_variable("firstname"))          # True
print(is_valid_variable("Gaurav_Telange"))     # True
print(is_valid_variable("DYPCET_2026"))        # True


# Exercise 4
# Clean a text and find the three most frequent words.

sentence = """
%Gaurav $is@ a %CSE@ student%, &and& I lo%#ve
%lea@rning%;. DYPCET $is a college; &in&
Ko@lhapur. I lo%ve Python and C++.
"""


# Remove unwanted characters.
cleaned_text = re.sub(
    r"[^A-Za-z ]+",
    "",
    sentence
)

print(cleaned_text)
# Gaurav is a CSE student and I love learning DYPCET is a college in Kolhapur I love Python and C


# Convert cleaned text into words.
words = cleaned_text.lower().split()

word_count = {}

for word in words:
    word_count[word] = word_count.get(word, 0) + 1


# Sort words by frequency.
most_frequent_words = sorted(
    word_count.items(),
    key=lambda item: item[1],
    reverse=True
)

print(most_frequent_words[:3])
# [('is', 2), ('a', 2), ('i', 2)]


# 23. RegEx Examples Related to Gaurav's Student Work


# Find programming languages from a sentence.

text = "Gaurav is learning Python, C++, Java and SQL."

languages = re.findall(
    r"Python|C\+\+|Java|SQL",
    text
)

print(languages)                               # ['Python', 'C++', 'Java', 'SQL']


# Find college abbreviation.

text = "Gaurav studies at DYPCET in Kolhapur."

college = re.search(
    r"DYPCET",
    text
)

print(college.group())                         # DYPCET


# Find age from student information.

text = "Gaurav Telange is 20 years old."

age = re.search(
    r"\d+",
    text
)

print(age.group())                             # 20
