import json

with open("json_file.json","w") as file:
    json.dump([11,22,33,444,5],file)          # the write function

with open("json_file.json","r") as file:       # the read function
    content = json.load(file)
print(content)

# with open("json_file.json","w") as file:
#     json.dump([100,23,32],file)          #data overwritten in json_file
#
#
# with open("json_file.json","a") as file:       # the read function
#    json.dump([0,1000],file)
#
# with open("json_file.json","r") as file:       # the read function
#     content = json.load(file)
# print(content)

# json dictaniory

customer_1 ={
     "name" : "Ali",
     "credit" : 2350,
    "address" : "B-256 North Karachi"
 }
with open("jsonDict.json","w") as file:
    json.dump(customer_1,file)

with open("jsonDict.json","r") as file:
    content = json.load(file)
print(content)