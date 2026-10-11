import statistics
from collections import Counter


# 1. CHECK THE TYPES OF BUILT-IN OBJECTS

num = 10
string = "string"
boolean = True
lst = []
tpl = ()
set1 = set()
dct = {}

print(type(num))       # Output: <class 'int'>
print(type(string))    # Output: <class 'str'>
print(type(boolean))   # Output: <class 'bool'>
print(type(lst))       # Output: <class 'list'>
print(type(tpl))       # Output: <class 'tuple'>
print(type(set1))      # Output: <class 'set'>
print(type(dct))       # Output: <class 'dict'>


# 2. CREATING A CLASS AND AN OBJECT

class EmptyPerson:
    pass  # pass allows an empty class


p = EmptyPerson()  # Create an object of EmptyPerson
print(type(p))     # Output: <class '__main__.EmptyPerson'>


# 3. CONSTRUCTOR AND SELF

class Person:
    def __init__(self, name):
        self.name = name  # Store name in the current object


p = Person("Asabeneh")

print(p.name)  # Output: Asabeneh


# 4. CONSTRUCTOR WITH MULTIPLE PARAMETERS

class PersonDetails:
    def __init__(self, firstname, lastname, age, country, city):
        self.firstname = firstname
        self.lastname = lastname
        self.age = age
        self.country = country
        self.city = city


p = PersonDetails("Asabeneh", "Yetayeh", 250, "Finland", "Helsinki")

print(p.firstname)  # Output: Asabeneh
print(p.lastname)   # Output: Yetayeh
print(p.age)        # Output: 250
print(p.country)    # Output: Finland
print(p.city)       # Output: Helsinki


# 5. OBJECT METHODS

class PersonWithMethod:
    def __init__(self, firstname, lastname, age, country, city):
        self.firstname = firstname
        self.lastname = lastname
        self.age = age
        self.country = country
        self.city = city

    def person_info(self):
        # Return information about this person
        return (
            f"{self.firstname} {self.lastname} is {self.age} years old. "
            f"He lives in {self.city}, {self.country}"
        )


p = PersonWithMethod("Asabeneh", "Yetayeh", 250, "Finland", "Helsinki")

print(p.person_info())  # Output: Asabeneh Yetayeh is 250 years old. He lives in Helsinki, Finland


# 6. DEFAULT VALUES IN A CONSTRUCTOR

class DefaultPerson:
    def __init__(
        self,
        firstname="Asabeneh",
        lastname="Yetayeh",
        age=250,
        country="Finland",
        city="Helsinki"
    ):
        self.firstname = firstname
        self.lastname = lastname
        self.age = age
        self.country = country
        self.city = city

    def person_info(self):
        return (
            f"{self.firstname} {self.lastname} is {self.age} years old. "
            f"He lives in {self.city}, {self.country}."
        )


p1 = DefaultPerson()  # Uses default values
p2 = DefaultPerson("John", "Doe", 30, "Nomanland", "Noman city")

print(p1.person_info())  # Output: Asabeneh Yetayeh is 250 years old. He lives in Helsinki, Finland.
print(p2.person_info())  # Output: John Doe is 30 years old. He lives in Noman city, Nomanland.


# 7. ADDING SKILLS TO OBJECTS

class PersonWithSkills:
    def __init__(
        self,
        firstname="Asabeneh",
        lastname="Yetayeh",
        age=250,
        country="Finland",
        city="Helsinki"
    ):
        self.firstname = firstname
        self.lastname = lastname
        self.age = age
        self.country = country
        self.city = city
        self.skills = []  # Each object gets its own skills list

    def person_info(self):
        return (
            f"{self.firstname} {self.lastname} is {self.age} years old. "
            f"He lives in {self.city}, {self.country}."
        )

    def add_skill(self, skill):
        self.skills.append(skill)  # Add a skill to this object


p1 = PersonWithSkills()
p1.add_skill("HTML")
p1.add_skill("CSS")
p1.add_skill("JavaScript")

p2 = PersonWithSkills("John", "Doe", 30, "Nomanland", "Noman city")

print(p1.person_info())  # Output: Asabeneh Yetayeh is 250 years old. He lives in Helsinki, Finland.
print(p2.person_info())  # Output: John Doe is 30 years old. He lives in Noman city, Nomanland.
print(p1.skills)         # Output: ['HTML', 'CSS', 'JavaScript']
print(p2.skills)         # Output: []


# 8. INHERITANCE
# Student inherits properties and methods from PersonWithSkills.

class Student(PersonWithSkills):
    pass  # Inherits the parent's constructor and methods


s1 = Student("Eyob", "Yetayeh", 30, "Finland", "Helsinki")
s2 = Student("Lidiya", "Teklemariam", 28, "Finland", "Espoo")

print(s1.person_info())  # Output: Eyob Yetayeh is 30 years old. He lives in Helsinki, Finland.
s1.add_skill("JavaScript")
s1.add_skill("React")
s1.add_skill("Python")
print(s1.skills)         # Output: ['JavaScript', 'React', 'Python']

print(s2.person_info())  # Output: Lidiya Teklemariam is 28 years old. He lives in Espoo, Finland.
s2.add_skill("Organizing")
s2.add_skill("Marketing")
s2.add_skill("Digital Marketing")
print(s2.skills)         # Output: ['Organizing', 'Marketing', 'Digital Marketing']


# 9. METHOD OVERRIDING AND SUPER()

class StudentWithGender(PersonWithSkills):
    def __init__(
        self,
        firstname="Asabeneh",
        lastname="Yetayeh",
        age=250,
        country="Finland",
        city="Helsinki",
        gender="male"
    ):
        self.gender = gender
        # Call the parent's constructor to initialize its attributes
        super().__init__(firstname, lastname, age, country, city)

    def person_info(self):
        # Override the parent's method
        pronoun = "He" if self.gender == "male" else "She"

        return (
            f"{self.firstname} {self.lastname} is {self.age} years old. "
            f"{pronoun} lives in {self.city}, {self.country}."
        )


s1 = StudentWithGender("Eyob", "Yetayeh", 30, "Finland", "Helsinki", "male")
s2 = StudentWithGender("Lidiya", "Teklemariam", 28, "Finland", "Espoo", "female")

print(s1.person_info())  # Output: Eyob Yetayeh is 30 years old. He lives in Helsinki, Finland.
s1.add_skill("JavaScript")
s1.add_skill("React")
s1.add_skill("Python")
print(s1.skills)         # Output: ['JavaScript', 'React', 'Python']

print(s2.person_info())  # Output: Lidiya Teklemariam is 28 years old. She lives in Espoo, Finland.
s2.add_skill("Organizing")
s2.add_skill("Marketing")
s2.add_skill("Digital Marketing")
print(s2.skills)         # Output: ['Organizing', 'Marketing', 'Digital Marketing']


# 10. STATISTICS CLASS

class Statistics:
    def __init__(self, data):
        self.data = list(data)  # Store a copy of the sample

        if not self.data:
            raise ValueError("The data list cannot be empty.")

    def count(self):
        return len(self.data)

    def sum(self):
        return builtins_sum(self.data)

    def min(self):
        return min(self.data)

    def max(self):
        return max(self.data)

    def range(self):
        return self.max() - self.min()

    def mean(self):
        return statistics.mean(self.data)

    def median(self):
        return statistics.median(self.data)

    def mode(self):
        # Return the most frequent value and its frequency
        counts = Counter(self.data)
        highest_count = max(counts.values())
        most_frequent = min(
            value for value, count in counts.items()
            if count == highest_count
        )
        return (most_frequent, highest_count)

    def var(self):
        # Population variance
        average = self.mean()
        return builtins_sum(
            (value - average) ** 2 for value in self.data
        ) / self.count()

    def std(self):
        # Population standard deviation
        return self.var() ** 0.5

    def percentile(self, percent):
        # Use linear interpolation between sorted values
        if not 0 <= percent <= 100:
            raise ValueError("Percentile must be between 0 and 100.")

        values = sorted(self.data)
        position = (len(values) - 1) * percent / 100
        lower = int(position)
        upper = min(lower + 1, len(values) - 1)
        fraction = position - lower

        return values[lower] + fraction * (
            values[upper] - values[lower]
        )

    def freq_dist(self):
        # Percentage frequency, sorted from highest to lowest
        counts = Counter(self.data)
        total = self.count()

        return sorted(
            [
                (round(count / total * 100, 1), value)
                for value, count in counts.items()
            ],
            key=lambda item: (-item[0], -item[1])
        )

    def describe(self):
        # Return a readable summary of all statistics
        return (
            f"Count: {self.count()}\n"
            f"Sum:  {self.sum()}\n"
            f"Min:  {self.min()}\n"
            f"Max:  {self.max()}\n"
            f"Range:  {self.range()}\n"
            f"Mean:  {self.mean():g}\n"
            f"Median:  {self.median():g}\n"
            f"Mode:  {self.mode()}\n"
            f"Variance:  {self.var():.1f}\n"
            f"Standard Deviation:  {self.std():.1f}\n"
            f"Frequency Distribution: {self.freq_dist()}"
        )


# Alias avoids conflict with the Statistics.sum() method.
builtins_sum = sum

ages = [
    31, 26, 34, 37, 27, 26, 32, 32, 26, 27,
    27, 24, 32, 33, 27, 25, 26, 38, 37, 31,
    34, 24, 33, 29, 26
]

data = Statistics(ages)

print("Count:", data.count())                      # Output: Count: 25
print("Sum:", data.sum())                          # Output: Sum: 744
print("Min:", data.min())                          # Output: Min: 24
print("Max:", data.max())                          # Output: Max: 38
print("Range:", data.range())                      # Output: Range: 14
print("Mean:", data.mean())                        # Output: Mean: 29.76
print("Median:", data.median())                    # Output: Median: 29
print("Mode:", data.mode())                        # Output: Mode: (26, 5)
print("Variance:", round(data.var(), 1))            # Output: Variance: 17.5
print("Standard Deviation:", round(data.std(), 1))  # Output: Standard Deviation: 4.2
print("75th Percentile:", data.percentile(75))      # Output: 75th percentile, calculated from sorted data
print("Frequency Distribution:", data.freq_dist()) # Output: Percentage and value pairs, highest frequency first
print(data.describe())                             # Output: Complete statistical summary


# 11. EXERCISE: PERSON ACCOUNT

class PersonAccount:
    def __init__(self, firstname, lastname):
        self.firstname = firstname
        self.lastname = lastname

        # Store descriptions and amounts as pairs.
        self.incomes = set()
        self.expenses = set()

    def add_income(self, amount, description):
        self.incomes.add((amount, description))

    def add_expense(self, amount, description):
        self.expenses.add((amount, description))

    def total_income(self):
        return sum(amount for amount, description in self.incomes)

    def total_expense(self):
        return sum(amount for amount, description in self.expenses)

    def account_balance(self):
        return self.total_income() - self.total_expense()

    def account_info(self):
        return (
            f"Account holder: {self.firstname} {self.lastname}\n"
            f"Total income: {self.total_income()}\n"
            f"Total expenses: {self.total_expense()}\n"
            f"Account balance: {self.account_balance()}"
        )


account = PersonAccount("Gaurav", "Telange")

account.add_income(25000, "Salary")
account.add_income(5000, "Freelance work")
account.add_expense(3000, "Food")
account.add_expense(2000, "Travel")

print(account.total_income())    # Output: 30000
print(account.total_expense())   # Output: 5000
print(account.account_balance()) # Output: 25000
print(account.account_info())    # Output: Account holder and complete account summary
