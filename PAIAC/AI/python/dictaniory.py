# Dictaniory - II
# dictanionary does not have indexing
bio = {
    "name": "Hamza",
    "full name ": "Syed Muhammad Hamza",
    "age": 20,
    "gender": "Male",
    "university": "Oxford University",  # when similar keys are defined the latter is printed
    "university": "DUET",
    1: "Loves Football",
    2: "Hates Biology",
    3: 3.78,

}
# length
print(len(bio))

# adding elements in dictaniory
bio["email"] = 'hamza.smh2000@gmail.com'
print(bio)

# similar keys overwrites
bio["age"] = 21
print(bio["university"])
print(bio[1])
print(bio[2])
print(bio[3])

# deleting from dictaniory
del bio["university"]
print(bio)

# checking availibility of a key
print(1 in bio)
print("university" in bio, "\n")

# printing out all the keys of a dictaniory
print("Keys used in bio{} are :\n")
for key in bio.keys():
    print(key)

# printing out all the values of a dictaniory
print("\nValues used in bio{} are :\n")
for value in bio.values():
    print(value)

# printing out all the keys and value of a dictaniory
print("Keys and values used in bio{} are :\n")
for key, value in bio.items():
    print(key, " = ", value)
