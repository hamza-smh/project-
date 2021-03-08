#dictaniory - III
myDict = {
     #dictaniory within dictaniory
     "bio" : {
        "Name" : "Hamza",
        "Full name" : "Syed Muhammad Hamza",
        "Age" : 20,
        "Gender" : "Male",
      },

     #list within dictaniory
     "subjects" : ["DLD", "ENA" , "ECD", "CVT", "DSA",],

     #tuple within dictaniory
     "institute" : ("Beacon Light Academy", "Govt.Delhi College" , "Dawood University"),
}
print(myDict["bio"]["Full name"])
print("Something about me :" ,myDict["bio"])
print("I have following subjects this semester :",myDict["subjects"])
print("I have studied in the following institutes :\n",myDict["institute"])
print("I am currently a student of : " ,myDict["institute"][2])