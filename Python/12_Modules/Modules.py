# Modules

# A module is a Python file containing functions, variables, or other code.
# Modules can be imported and reused in other Python programs.


# Creating a Module

# Suppose we have a file named mymodule.py:
#
# def generate_full_name(firstname, lastname):
#     return firstname + ' ' + lastname
#
# We can import mymodule into another Python file.


# Importing a Module

# Example of mymodule.py:
#
# def generate_full_name(firstname, lastname):
#     return firstname + ' ' + lastname
#
# main.py:
#
# import mymodule
# print(mymodule.generate_full_name('Gaurav', 'Telange'))
# Gaurav Telange


# Import Functions from a Module

# Example:
#
# from mymodule import generate_full_name, sum_two_nums, person, gravity
#
# print(generate_full_name('Gaurav', 'Telange'))
# print(sum_two_nums(1, 9))
# mass = 100
# weight = mass * gravity
# print(weight)
# print(person['firstname'])


# Import Functions from a Module and Renaming

# Example:
#
# from mymodule import generate_full_name as fullname
# from mymodule import sum_two_nums as total
# from mymodule import person as p
# from mymodule import gravity as g
#
# print(fullname('Gaurav', 'Telange'))
# print(total(1, 9))
# mass = 100
# weight = mass * g
# print(weight)
# print(p)
# print(p['firstname'])


# Import Built-in Modules

# Common built-in modules include:
# math, datetime, os, sys, random, statistics, collections, json, re


# OS Module

import os

print(os.getcwd())                                      # Current working directory (depends on your computer)

# Creating a directory
# os.mkdir('student_directory')

# Changing the current directory
# os.chdir('path')

# Getting the current working directory
print(os.getcwd())                                      # Current working directory (depends on your computer)

# Removing a directory
# os.rmdir('student_directory')


# Sys Module

import sys

# sys.argv contains command-line arguments.
# sys.argv[0] is the script name.
# sys.argv[1] is the first argument.
# sys.argv[2] is the second argument.

# Example:
#
# script.py
#
# import sys
# print('Welcome {}. Enjoy {} challenge!'.format(sys.argv[1], sys.argv[2]))
#
# Command:
# python script.py Gaurav Python
#
# Output:
# Welcome Gaurav. Enjoy Python challenge!


# Some useful sys commands

print(sys.maxsize)                                      # Largest supported integer size
print(sys.version)                                      # Python version (depends on your system)

# sys.path shows the locations Python searches for modules.
print(sys.path)                                         # Python module search paths (depends on your system)

# sys.exit()                                             # Exits the program


# Statistics Module

from statistics import mean, median, mode, stdev

ages = [20, 20, 4, 24, 25, 22, 26, 20, 23, 22, 26]

print(mean(ages))                                       # 20.90909090909091
print(median(ages))                                     # 22
print(mode(ages))                                       # 20
print(stdev(ages))                                      # 6.0332409650657 (approximately)


# Math Module

import math

print(math.pi)                                          # 3.141592653589793
print(math.sqrt(2))                                     # 1.4142135623730951
print(math.pow(2, 3))                                   # 8.0
print(math.floor(9.81))                                 # 9
print(math.ceil(9.81))                                  # 10
print(math.log10(100))                                  # 2.0

# dir() can show the available functions and constants in a module.
# print(dir(math))


# Import a Specific Function from math

from math import pi

print(pi)                                               # 3.141592653589793


# Import Multiple Functions

from math import pi, sqrt, pow, floor, ceil, log10

print(pi)                                               # 3.141592653589793
print(sqrt(2))                                          # 1.4142135623730951
print(pow(2, 3))                                        # 8.0
print(floor(9.81))                                      # 9
print(ceil(9.81))                                       # 10
print(log10(100))                                       # 2.0


# Import All Functions from math

from math import *

print(pi)                                               # 3.141592653589793
print(sqrt(2))                                          # 1.4142135623730951
print(pow(2, 3))                                        # 8.0
print(floor(9.81))                                      # 9
print(ceil(9.81))                                       # 10
print(log10(100))                                       # 2.0


# Rename an Imported Function

from math import pi as PI

print(PI)                                               # 3.141592653589793


# String Module

import string

print(string.ascii_letters)                             # abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ
print(string.digits)                                    # 0123456789
print(string.punctuation)                               # !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~


# Random Module

from random import random, randint

print(random())                                         # Random value between 0 and 1 (random)
print(randint(5, 20))                                   # Random integer between 5 and 20 (random)



# Generate a six-character random user ID.

import random
import string


def random_user_id():
    characters = string.ascii_letters + string.digits
    user_id = ''

    for _ in range(6):
        user_id += random.choice(characters)

    return user_id


print(random_user_id())                                 # Example: aB72xQ (random)



# Generate user IDs based on the number of characters and number of IDs.

def user_id_gen_by_user():
    number_of_characters = int(input('Enter number of characters: '))
    number_of_ids = int(input('Enter number of IDs: '))

    characters = string.ascii_letters + string.digits
    result = []

    for _ in range(number_of_ids):
        user_id = ''

        for _ in range(number_of_characters):
            user_id += random.choice(characters)

        result.append(user_id)

    return '\n'.join(result)


# Example:
# Input:
# 5
# 5
#
# Output:
# kcsy2
# SMFYb
# bWmeq
# ZXOYh
# 2Rgxf
#
# Output will be different each time because it is random.

# print(user_id_gen_by_user())


# Exercise 3
# Generate an RGB color.

def rgb_color_gen():
    red = random.randint(0, 255)
    green = random.randint(0, 255)
    blue = random.randint(0, 255)

    return f'rgb({red},{green},{blue})'


print(rgb_color_gen())                                  # Example: rgb(125,244,255) (random)





# Generate a list of hexadecimal colors.

def list_of_hexa_colors(number):
    colors = []

    for _ in range(number):
        color = '#'

        for _ in range(6):
            color += random.choice('0123456789abcdef')

        colors.append(color)

    return colors


print(list_of_hexa_colors(3))                           # Example: ['#a3e12f', '#03ed55', '#eb3d2b'] (random)



# Generate a list of RGB colors.

def list_of_rgb_colors(number):
    colors = []

    for _ in range(number):
        red = random.randint(0, 255)
        green = random.randint(0, 255)
        blue = random.randint(0, 255)

        color = f'rgb({red},{green},{blue})'
        colors.append(color)

    return colors


print(list_of_rgb_colors(3))                            # Example: ['rgb(5,55,175)', 'rgb(50,105,100)', 'rgb(15,26,80)'] (random)



# Generate either hexadecimal or RGB colors.

def generate_colors(color_type, number):
    if color_type == 'hexa':
        return list_of_hexa_colors(number)

    elif color_type == 'rgb':
        return list_of_rgb_colors(number)

    else:
        return []


print(generate_colors('hexa', 3))                       # Example: ['#a3e12f', '#03ed55', '#eb3d2b'] (random)
print(generate_colors('hexa', 1))                       # Example: ['#b334ef'] (random)
print(generate_colors('rgb', 3))                        # Example: ['rgb(5,55,175)', 'rgb(50,105,100)', 'rgb(15,26,80)'] (random)
print(generate_colors('rgb', 1))                        # Example: ['rgb(33,79,176)'] (random)





# Shuffle a list and return the shuffled list.

def shuffle_list(items):
    shuffled = items.copy()
    random.shuffle(shuffled)

    return shuffled


numbers = [1, 2, 3, 4, 5]

print(shuffle_list(numbers))                            # Example: [3, 1, 5, 2, 4] (random)
print(numbers)                                          # [1, 2, 3, 4, 5]



# Return seven unique random numbers from 0 to 9.

def seven_unique_random_numbers():
    numbers = random.sample(range(10), 7)

    return numbers


print(seven_unique_random_numbers())                     # Example: [2, 8, 0, 5, 9, 1, 6] (random)


# Student Information Example

student = {
    'name': 'Gaurav Telange',
    'age': 20,
    'city': 'Kolhapur',
    'college': 'D.Y. Patil College of Engineering and Technology'
}

print(student['name'])                                  # Gaurav Telange
print(student['age'])                                   # 20
print(student['city'])                                  # Kolhapur
print(student['college'])                               # D.Y. Patil College of Engineering and Technology


# Using a module function with student information

def generate_student_info(name, age, city):
    return f'{name} is {age} years old and lives in {city}.'


print(generate_student_info('Gaurav Telange', 20, 'Kolhapur'))
# Gaurav Telange is 20 years old and lives in Kolhapur.
