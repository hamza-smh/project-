# "a" appends in file( adds from the existing last point)
# "r" read file (does not edit)(would not work if file does not exist)
# "r+" reads and writes(would not work if file does not exist)
# "w" writes file (editable)(would create a file if it does not exist)
 # "w+" reads and writes (would create a file if it does not exist)

# Reading mode
#    WAY 1
# with open("textFile.txt","r") as file:
#     content = file.read()
#     file.write("Testing...")
# print(content)

#     Way 2
# file = open("textFile.txt","r")
# print(file.read())
# print(file.readable())
# print(file.readlines()[3])
# # print(file.readlines()[2:3])

# # Writing mode
# f = open("textFile.txt", "w")
# f.write("This has overwritten over last text")
# print(f.read())
# f.write("This is just practice")

#non existing file
# r = open("nothing.txt","r")
# print(r.read()) # not possible

w = open("nothing.txt", "w")
w.write("Kuch Nahi")

a= open("nothing.txt", "a")
w.write("\nAppended")

with open("nothing.txt","w+") as w_plus:
   w_plus.write("My Name Is Hamza")
   w_plus.read()

with open ("nothing.txt","r+") as r_plus:
    print(r_plus.read())
    r_plus.write("Achi baat hai")
    print(r_plus.read())