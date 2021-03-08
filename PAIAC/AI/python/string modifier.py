#Two alternaives for all data types
name = "Hamza"
print("My name is ",name, ".Is your name",name, " too  ?")
print( "My name is %s .Is your name %s too ?" %(name,name))
print(f"My name is {name}.Is your name {name} too ?")                            #  old format
print("My name is {} .Is your name {} too ?".format(name,name) )                 #  new format

# This method explicitly for string
 print("My name is "+name+ ".Is your name "+name+ " too  ?")


str_data = input("Where do you live ?\n")
print(type(str_data))
print(str_data.lower())
print(str_data.upper())
print(str_data.title())

#print(str_data.islower()) such functions are boolean checks
