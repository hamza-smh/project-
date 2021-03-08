# printing a dictaniory containing dictionaries as elements

employee = {
    "Name" : "Taha Khan",
    "Age" : 46,
    "Post": "Manager",
    "Designation" : "Karachi",
    "Children" :
        {
         "Mustufa Khan":
               {
                  "Name" : "Mustufa Khan",
                  "Age" : 16,
                  "Class" : "10th Standard"
               },
         "Saira Khan" :
              {
                  "Name" : "Saira Khan",
                  "Age" : 21,
                  "Class" : "University"
              },
        },
    "Salary" : 150000,
}

print("Name : ",employee["Name"],"\nSalary :",employee["Salary"])
print("Son :",employee["Children"]["Mustufa Khan"])
print("Age of Daughter :",employee["Children"]["Saira Khan"]["Age"])
