# #just in case we do not want to give three values of parameters
# def name(first = " ", middle=" ",last=" "):    #the default parameters are always kept in last if used with non-default parameters
#     print(first , middle , last )
# name("Syed","Muhammad","Hamza")             #with parameters

# def full_name():                      #without parameters
#     first = input("First Name :\n")
#     middle = input("Middle Name :\n")
#     last = input("Last Name :\n")
#     print(first, middle, last)
# full_name()

#Dealing with unknown number of arguments
# def order_pizza(size , flavour ,*topping):   # * deals with arbitrary values( can have multiple or none value)
#     print(f"You order is for a pizza of {size} {flavour} with {topping}toppings.")
#     # the arbitrary argument should be in last
#     # values in *argument are stored in tuple
# order_pizza("13 inch","Fajita")

# def sum(x,y):
#     ans = x + y
#     return ans,100               # multiple values can be returned as tuple
#     print("Hello")               # a line after return is not entertained(read)
# result =sum(100,76)
# print(result)

#function interaracting with function
def commission(sales):
    if sales >100:
        return sales*100
    elif sales>50:
        return sales*50
    elif sales>30:
        return sales*50
    elif sales>20:
        return sales*50
    else:
        return sales*1
def salary_calc(basic,sales):
    gross_salary = basic + commission(sales)
    salary = gross_salary-(gross_salary*0.17)  #tax
    print(f"Your salary is {salary}")

salary_calc(50000,1500)
