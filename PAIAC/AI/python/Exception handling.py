try:
   a = [ ]
   int_1 = int(input("first integer "))
   int_2 = int(input("Second integer "))
                                                     #if all goes well
   ans = int_1 / int_2
   # print(a[5])
   print(ans)
except IndexError:
    print("Ja k 'a' ka index sahi karo")
except ZeroDivisionError:                                   #errors can be dealt seperately
    print("Bhai zero sey q divide kar raha hai")
except ValueError:
    print("Value tu sahi daalo")
#except:                                                   OR      can be dealt generally
#     print("Not possible")
else:
    print("Karna kia chahtey ho")
finally:                                                    # finally: always run chahey error aaye ya na aye
    print("Chalo khatam hoa")