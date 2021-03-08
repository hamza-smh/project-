 rooms = { 1: "Office",2:"Confrence Hall"}
room = input("What room do you wanna go :")
if not room in rooms:
    print("Room does not exist")
else:
    print("The room name is "+rooms[room])
