students = []
# A list having dictaniories as elements
students.append(
    {
    "id" : "A001",
    "name" : "Hamza",
    "subject": "A.I",
    }
)
print(students)
students.append(
    {
    "id" : "I092",
    "name" : "Umer",
    "subject": "IoT",
    },
)
students.append(
    {
    "id" : "C034",
    "name" : "Hassan",
    "subject": "CNC",
    },
)
print(students)
# printing a list containing dictionaries as elements
print(students[1]["id"])
print(students[0]["name"])
