# a= 0
# while a<=100:
#     print(f"{a}. Hamza")
#     a += 10

# using flag -while loop  -> giving control to user for no. of input
flag = True
food = []
while flag == True:
    info = input("Your favourite food: ")
    if info == "Done":
        flag = False
    else :
        food.append(info)
print(f"I love {food}")
