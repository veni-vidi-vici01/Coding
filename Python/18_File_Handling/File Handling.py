import os
import json
import csv
import re
from collections import Counter


# 1. Create a text file
# "w" creates a new file or overwrites an existing file.
# The with statement automatically closes the file.

with open("student.txt", "w", encoding="utf-8") as file:
    file.write("Gaurav Telange - CSE Student\n")
    file.write("College: DYPCET\n")
    file.write("City: Kolhapur\n")

print("1. File created successfully")  # File created successfully


# 2. Read the complete file
# "r" means read mode. read() returns all file content as a string.

with open("student.txt", "r", encoding="utf-8") as file:
    content = file.read()

print("2. File content:")
print(content)
# Gaurav Telange - CSE Student
# College: DYPCET
# City: Kolhapur


# 3. Read the first 10 characters
# read(10) reads at most 10 characters.

with open("student.txt", "r", encoding="utf-8") as file:
    first_ten = file.read(10)

print("3. First 10 characters:", first_ten)  # First 10 characters: Gaurav Tel


# 4. Read the first line
# readline() reads one line. strip() removes the newline at the end.

with open("student.txt", "r", encoding="utf-8") as file:
    first_line = file.readline()

print("4. First line:", first_line.strip())
# First line: Gaurav Telange - CSE Student


# 5. Read all lines into a list
# readlines() returns a list of lines, including newline characters.

with open("student.txt", "r", encoding="utf-8") as file:
    lines = file.readlines()

print("5. All lines:", lines)
# ['Gaurav Telange - CSE Student\n', 'College: DYPCET\n', 'City: Kolhapur\n']


# 6. Read lines without newline characters
# splitlines() separates text into lines without keeping "\n".

with open("student.txt", "r", encoding="utf-8") as file:
    clean_lines = file.read().splitlines()

print("6. Clean lines:", clean_lines)
# ['Gaurav Telange - CSE Student', 'College: DYPCET', 'City: Kolhapur']


# 7. Count lines and words
# splitlines() separates lines; split() separates words.

with open("student.txt", "r", encoding="utf-8") as file:
    text = file.read()

line_count = len(text.splitlines())
word_count = len(text.split())

print("7. Number of lines:", line_count)  # Number of lines: 3
print("   Number of words:", word_count)  # Number of words: 8


# 8. Append information to a file
# "a" means append. Existing content is preserved.

with open("student.txt", "a", encoding="utf-8") as file:
    file.write("Course: Computer Science Engineering\n")

print("8. Information appended successfully")  # Information appended successfully


# 9. Write a separate file
# "w" creates the file or replaces its previous contents.

with open("study_notes.txt", "w", encoding="utf-8") as file:
    file.write("Gaurav is practicing Python file handling.\n")
    file.write("Practice every concept with examples.\n")

print("9. Study notes file created")  # Study notes file created


# 10. Check whether a file exists
# os.path.exists() returns True if the path exists.

if os.path.exists("student.txt"):
    print("10. student.txt exists")  # student.txt exists
else:
    print("10. student.txt does not exist")


# 11. Handle a missing file
# If a file cannot be found, Python raises FileNotFoundError.
# try/except handles this error without stopping the program.

try:
    with open("missing_file.txt", "r", encoding="utf-8") as file:
        print(file.read())
except FileNotFoundError:
    print("11. File not found; error handled")  # File not found; error handled


# 12. Delete a file safely
# This creates and deletes a temporary file for demonstration.
# We do not delete student.txt.

temporary_file = "temporary_example.txt"

with open(temporary_file, "w", encoding="utf-8") as file:
    file.write("Temporary content")

if os.path.exists(temporary_file):
    os.remove(temporary_file)
    print("12. Temporary file deleted")  # Temporary file deleted


# 13. Create a dictionary with student information

student = {
    "name": "Gaurav Telange",
    "age": 20,
    "college": "DYPCET",
    "city": "Kolhapur",
    "course": "Computer Science Engineering"
}

print("13. Name:", student["name"])  # Name: Gaurav Telange
print("    Age:", student["age"])  # Age: 20
print("    College:", student["college"])  # College: DYPCET
print("    City:", student["city"])  # City: Kolhapur


# 14. Convert a dictionary into a JSON string
# json.dumps() converts a Python object into a JSON-formatted string.

student_json = json.dumps(student, indent=4)

print("14. JSON string created")  # JSON string created
print(student_json)  # Prints the formatted JSON student information


# 15. Convert a JSON string into a dictionary
# json.loads() parses the JSON string into Python data.

student_dictionary = json.loads(student_json)

print("15. Name from JSON:", student_dictionary["name"])
# Name from JSON: Gaurav Telange

print("    Age from JSON:", student_dictionary["age"])  # Age from JSON: 20
print("    City from JSON:", student_dictionary["city"])  # City from JSON: Kolhapur


# 16. Save student information to a JSON file
# json.dump() writes Python data directly into a file.

with open("student.json", "w", encoding="utf-8") as file:
    json.dump(student, file, indent=4)

print("16. Student data saved to student.json")  # Student data saved to student.json


# 17. Read student information from a JSON file
# json.load() reads JSON data from an open file.

with open("student.json", "r", encoding="utf-8") as file:
    loaded_student = json.load(file)

print("17. Loaded name:", loaded_student["name"])
# Loaded name: Gaurav Telange

print("    Loaded city:", loaded_student["city"])  # Loaded city: Kolhapur


# 18. Create a CSV file
# CSV stores tabular data in rows and columns.
# csv.writer() writes rows into a CSV file.
# newline="" prevents unwanted blank rows on some systems.

with open("students.csv", "w", newline="", encoding="utf-8") as file:
    writer = csv.writer(file)

    writer.writerow(["Name", "Age", "College", "City"])
    writer.writerow(["Gaurav Telange", 20, "DYPCET", "Kolhapur"])
    writer.writerow(["Rahul Patil", 20, "DYPCET", "Kolhapur"])

print("18. CSV file created")  # CSV file created


# 19. Read a CSV file
# csv.reader() returns each row as a list of strings.

with open("students.csv", "r", newline="", encoding="utf-8") as file:
    reader = csv.reader(file)
    csv_rows = list(reader)

print("19. CSV headings:", csv_rows[0])
# CSV headings: ['Name', 'Age', 'College', 'City']

print("    First student:", csv_rows[1])
# First student: ['Gaurav Telange', '20', 'DYPCET', 'Kolhapur']

print("    Number of students:", len(csv_rows) - 1)  # Number of students: 2


# 20. Count words in a sentence
# split() divides the sentence at whitespace characters.

sentence = "Gaurav is a CSE student at DYPCET in Kolhapur."
words = sentence.split()

print("20. Words:", words)
# ['Gaurav', 'is', 'a', 'CSE', 'student', 'at', 'DYPCET', 'in', 'Kolhapur.']

print("    Word count:", len(words))  # Word count: 9


# 21. Find the most frequent words
# re.findall() extracts words; lower() makes counting case-insensitive.
# Counter() counts how often each word appears.

sentence = "Python is easy and Python is useful for students."
words = re.findall(r"\b\w+\b", sentence.lower())

word_counts = Counter(words)

print("21. Three most frequent words:", word_counts.most_common(3))
# [('python', 2), ('is', 2), ('easy', 1)]


# 22. Extract email addresses from text
# This regular expression finds common email address formats.

email_text = "Contact gaurav@example.com or student@dypcet.edu."

emails = re.findall(r"[\w.+-]+@[\w.-]+\.\w+", email_text)

print("22. Email addresses:", emails)
# ['gaurav@example.com', 'student@dypcet.edu']


# 23. Count lines and words in a file using a function
# Functions allow us to reuse the same code for different files.

def count_file_lines_and_words(filename):
    with open(filename, "r", encoding="utf-8") as file:
        content = file.read()

    number_of_lines = len(content.splitlines())
    number_of_words = len(content.split())

    return number_of_lines, number_of_words


line_total, word_total = count_file_lines_and_words("student.txt")

print("23. Lines in student.txt:", line_total)  # Lines in student.txt: 4
print("    Words in student.txt:", word_total)  # Words in student.txt: 11


# 24. Find the most common words in a file
# Read the file, extract words, count them, and return the top results.

def find_most_common_words(filename, number):
    with open(filename, "r", encoding="utf-8") as file:
        content = file.read().lower()

    words = re.findall(r"\b\w+\b", content)
    return Counter(words).most_common(number)


print("24. Common words:", find_most_common_words("study_notes.txt", 3))
# [('gaurav', 1), ('is', 1), ('practicing', 1)]


# 25. Summary of file modes
# "r" = read an existing file
# "w" = write; replaces old content or creates a file
# "a" = append to the end of a file
# "x" = create a new file; fails if it already exists
# "b" = binary mode, often used for images
# "t" = text mode; this is the default

print("25. File handling examples completed for Gaurav Telange.")
# File handling examples completed for Gaurav Telange.

print("Created files: student.txt, study_notes.txt, student.json, students.csv")
# Created files: student.txt, study_notes.txt, student.json, students.csv
'''

path = Path("/mnt/data/File_Handling.py")
path.write_text(content, encoding="utf-8")
print("Created file:", path, "| lines:", len(content.splitlines()))
