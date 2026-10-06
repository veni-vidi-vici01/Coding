from datetime import datetime, date, time, timedelta


# 1. Python datetime

# The datetime module is used to work with dates and times.
import datetime

print(dir(datetime))  # Shows available functions and classes in the datetime module


# 2. Getting datetime Information

from datetime import datetime

now = datetime.now()

print("Current date and time:", now)       # Current date and time: (current value)

day = now.day
month = now.month
year = now.year
hour = now.hour
minute = now.minute
second = now.second
timestamp = now.timestamp()

print("Day:", day)                        # Day: (current day)
print("Month:", month)                    # Month: (current month)
print("Year:", year)                      # Year: (current year)
print("Hour:", hour)                      # Hour: (current hour)
print("Minute:", minute)                  # Minute: (current minute)
print("Second:", second)                  # Second: (current second)
print("Timestamp:", timestamp)             # Timestamp: (current Unix timestamp)

print(day, month, year, hour, minute)      # Current day, month, year, hour and minute
print(f"{day}/{month}/{year}, {hour}:{minute}")  # Current date and time in day/month/year format


# 3. Formatting Date Output Using strftime

new_year = datetime(2020, 1, 1)

print(new_year)                            # 2020-01-01 00:00:00

day = new_year.day
month = new_year.month
year = new_year.year
hour = new_year.hour
minute = new_year.minute
second = new_year.second

print(day, month, year, hour, minute)      # 1 1 2020 0 0
print(f"{day}/{month}/{year}, {hour}:{minute}")  # 1/1/2020, 0:0


# 4. Formatting current date and time using strftime()

now = datetime.now()

t = now.strftime("%H:%M:%S")
print("Time:", t)                          # Time: (current time)

time_one = now.strftime("%m/%d/%Y, %H:%M:%S")
print("Time one:", time_one)               # Time one: (MM/DD/YYYY, HH:MM:SS)

time_two = now.strftime("%d/%m/%Y, %H:%M:%S")
print("Time two:", time_two)               # Time two: (DD/MM/YYYY, HH:MM:SS)


# 5. String to Time Using strptime

date_string = "5 December, 2019"

print("date_string =", date_string)        # date_string = 5 December, 2019

date_object = datetime.strptime(date_string, "%d %B, %Y")

print("date_object =", date_object)        # date_object = 2019-12-05 00:00:00


# 6. Using date from datetime

from datetime import date

d = date(2020, 1, 1)

print(d)                                   # 2020-01-01
print("Date today from object:", d.today())  # Current date

today = date.today()

print("Current year:", today.year)         # Current year: (current year)
print("Current month:", today.month)       # Current month: (current month)
print("Current day:", today.day)           # Current day: (current day)


# 7. Student Information Using date

# Using Gaurav's information
student_name = "Gaurav Telange"
college = "D.Y. Patil College of Engineering and Technology"
city = "Kolhapur"

print("Student:", student_name)             # Student: Gaurav Telange
print("College:", college)                  # College: D.Y. Patil College of Engineering and Technology
print("City:", city)                        # City: Kolhapur

print(
    f"{student_name} is studying at {college} in {city}."
)                                           # Gaurav Telange is studying at D.Y. Patil College of Engineering and Technology in Kolhapur.


# 8. Time Objects to Represent Time

from datetime import time

# time(hour = 0, minute = 0, second = 0)
a = time()

print("a =", a)                             # a = 00:00:00

# time(hour, minute, second)
b = time(10, 30, 50)

print("b =", b)                             # b = 10:30:50

# time(hour, minute, second)
c = time(hour=10, minute=30, second=50)

print("c =", c)                             # c = 10:30:50

# time(hour, minute, second, microsecond)
d = time(10, 30, 50, 200555)

print("d =", d)                             # d = 10:30:50.200555


# 9. Difference Between Two Dates

from datetime import date, datetime

today = date(year=2019, month=12, day=5)
new_year = date(year=2020, month=1, day=1)

time_left_for_newyear = new_year - today

print(
    "Time left for New Year:", time_left_for_newyear
)                                           # Time left for New Year: 27 days, 0:00:00


# 10. Difference Between Two datetime Objects

t1 = datetime(
    year=2019,
    month=12,
    day=5,
    hour=0,
    minute=59,
    second=0
)

t2 = datetime(
    year=2020,
    month=1,
    day=1,
    hour=0,
    minute=0,
    second=0
)

diff = t2 - t1

print("Time left for New Year:", diff)       # Time left for New Year: 26 days, 23:01:00


# 11. Difference Between Two Points in Time Using timedelta

from datetime import timedelta

t1 = timedelta(
    weeks=12,
    days=10,
    hours=4,
    seconds=20
)

t2 = timedelta(
    days=7,
    hours=5,
    minutes=3,
    seconds=30
)

t3 = t1 - t2

print("t3 =", t3)                            # t3 = 86 days, 22:56:50


# 12. Student Activity Timestamp

# A timestamp can be useful for recording when a student
# submits an assignment or performs an activity.

student_activity = datetime.now()

print("Student:", student_name)              # Student: Gaurav Telange
print("Activity time:", student_activity)   # Activity time: (current date and time)
print("Timestamp:", student_activity.timestamp())  # Timestamp: (current Unix timestamp)





# Exercise 1
# Get the current day, month, year, hour, minute and timestamp.

now = datetime.now()

print("Current day:", now.day)               # Current day: (current day)
print("Current month:", now.month)           # Current month: (current month)
print("Current year:", now.year)             # Current year: (current year)
print("Current hour:", now.hour)             # Current hour: (current hour)
print("Current minute:", now.minute)         # Current minute: (current minute)
print("Current timestamp:", now.timestamp()) # Current timestamp: (current Unix timestamp)


# Exercise 2
# Format the current date using:
# "%m/%d/%Y, %H:%M:%S"

formatted_date = now.strftime("%m/%d/%Y, %H:%M:%S")

print("Formatted date:", formatted_date)     # Formatted date: (MM/DD/YYYY, HH:MM:SS)


# Exercise 3
# Today is 5 December, 2019.
# Change this time string to a datetime object.

date_string = "5 December, 2019"

date_object = datetime.strptime(
    date_string,
    "%d %B, %Y"
)

print("Original string:", date_string)       # Original string: 5 December, 2019
print("Datetime object:", date_object)       # Datetime object: 2019-12-05 00:00:00


# Exercise 4
# Calculate the time difference between now and New Year.

now = datetime.now()

next_new_year = datetime(
    year=now.year + 1,
    month=1,
    day=1
)

time_difference = next_new_year - now

print("Student:", student_name)              # Student: Gaurav Telange
print("Time left for New Year:", time_difference)  # Time left for New Year: (current difference)


# Exercise 5
# Calculate the time difference between
# 1 January 1970 and now.

unix_start = datetime(
    year=1970,
    month=1,
    day=1
)

now = datetime.now()

difference_from_unix = now - unix_start

print(
    "Time since 1 January 1970:",
    difference_from_unix
)                                           # Time since 1 January 1970: (current difference)


# Exercise 6
# Think about what the datetime module can be used for.

print("Student:", student_name)              # Student: Gaurav Telange
print("College:", college)                   # College: D.Y. Patil College of Engineering and Technology
print("City:", city)                         # City: Kolhapur

print("Uses of datetime module:")             # Uses of datetime module:
print("1. Time series analysis")              # 1. Time series analysis
print("2. Recording activity timestamps")     # 2. Recording activity timestamps
print("3. Adding posts on a blog")            # 3. Adding posts on a blog
print("4. Recording assignment submission time")  # 4. Recording assignment submission time
print("5. Tracking project activity time")    # 5. Tracking project activity time
