# Creating a class
class Car():
    # attributes  => variable
    def __init__(self,color,make,model,year):
         # These attributes are to be provided
         self.make = make
         self.color = color
         self.model = model
         self.year = year

         # default attribute
         self.battery = "500amp"

    # behaviour => function
    def description(self):
        print(f"The make of the car is{self.make}\n")
        print(f"It is a {self.color} color {self.model} , made in the year {self.year}")
    def acc(self):
        print(f"The amazing {self.make} accelerates to 100 miles per hr in less than 20 seconds")
    def brakes(self):
        print(f"The new model {self.model} is equipped with ABS Brake System")
    def des_battery(self):
        print(f"The size of the battery is {self.battery}")
    def setBatterysize(self,newsize):      #works as a scanning function => stores(overwrites) value to battery
        self.battery = newsize
    def getBatterysize(self):              # works as a printing function
        print(f"The size of your car's battery is {self.battery}")

# Creating object for class Car():
car_1 = Car("Red","Toyota","Corolla",2017 )
car_2 = Car("Blue", "Honda" , "Civic" , 2018)
#
# print(car_1.make,car_1.model,"is of colour ",car_1.color," of the year", car_1.year)
# print(car_1.acc(),car_1.brakes())
# print(car_1.description())
#
# print(car_2.make,car_2.model,"is of colour ",car_2.color," of the year", car_2.year)
# print(car_2.acc())
# print(car_2.brakes())
# print(car_2.description())
# #changing values directly
# car_1.make ="Ferrari"
# car_1.model = "GTX "
# car_1.description()

#print(car_1.battery)      when a value is to be interchangably used use get function
print(car_1.setBatterysize("2000 amps"))
print(car_1.getBatterysize())