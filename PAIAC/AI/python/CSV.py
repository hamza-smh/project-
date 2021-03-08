import csv

with open("whatever.csv","w",newline="") as file:         #newline= is a function that has removed spaces here
    content = csv.writer(file,delimiter=",")              #delimiter includes anything(char) that distinguishes (seperates) two data
    content.writerow(["Year","Event","Winner"])
    content.writerow(["1992","ICC - WorldCup" ,"Pakistan"])
    content.writerow(["2017", "Champions Trophy" , "Pakistan"])
    content.writerow(["2016", "ICC - WorldCup","India"])

# wwith openhen mode is not given then it is read

with open("whatever.csv") as file:
    excel = csv.reader(file)
    for data in excel:
        print (data)

with open("whatever.csv","a",newline="") as file:
    content = csv.writer(file)
    content.writerow(["2007","ICC WorldCup","Australia"])

with open("whatever.csv") as file:
    excel = csv.reader(file)
    for data in excel:
        print (data)
