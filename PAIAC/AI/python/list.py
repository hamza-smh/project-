bio = ["Hamza", 3.76,"DUET"]
print(bio)
bio.insert(1,20)
print(bio)
bio.append("true")
print(bio)
bio.reverse()
print(bio)
bio.remove("true")
print(bio)
bio.clear()
print(bio)
bio.extend(["NK","Pak"]) #for adding multiple values
print(bio)
bio.append("Pak")
bio.count("Pak")
print(bio.count("Pak"))
print(bio.index("NK"))

bio_1 = bio.copy()  #by value doesnot edits in copy container
bio.append("Karachi")
print(bio)
print(bio_1)

bio_2 = bio      #by reference edits in new container
print(bio)
print(bio_2)

# num = [19,43,22,44,3,22,43]
# for i in num:
#     if 19 in num[1]:
#      print(num[i])
#      break
#          0       1        2        3        4       5        6         7      8       9
SUP = ["Sanskar","Salman","Hameer","Musab","Sabeel","Hamza","Zohaib","Rashid","Afaq","Arsalan"]
#       -10        -9        -8      -7      -6       -5      -4       -3       -2       -1
print(SUP[4:8])    #starting index included ending exclusive
print(SUP[-6:-2])  #indexing positive or negative ,reads always left side
print(SUP[5:])     #from index(5) to end ->index included
print(SUP[:5])     #fromstart to index(5) ->index not included
print(SUP[2:-1])   #indexing positive or negative ,reads always left side
print(SUP[7:-10])  # wrong indexing produces empty list not error
print(SUP[1:9:3])  #starting point : ending point : steps

roll_no = [3,5,29,31,39,41,51,61,65,69]
print(roll_no[3:10:2])
print(roll_no[5::2])     #ends at last
print(roll_no[:8:3])     #starts from beginning
print(roll_no[::4])      #from start to end

#deleting elements -> is completely deleted
del SUP[8]
print(SUP)
del SUP[2:5]
print(SUP)
SUP.remove("Sanskar")
print(SUP)

#pop   -> taking last elements out(by default) ,can be stored somewhere else
SUP = ["Sanskar","Salman","Hameer","Musab","Sabeel","Hamza","Zohaib","Rashid","Afaq","Arsalan"]
s = SUP.pop()
print(s)
me = SUP.pop(5)   # can be indexed
print(me)