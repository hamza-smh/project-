def add():
    x = int(input("First Integer \n"))
    y = int(input("Second Integer \n"))
    return (x+y)
print("Adding :",add())
def sub(a,b):
    # a  = int(input("First Integer \n"))
    # b = int(input("First Integer \n"))
    return a-b
print("Subtracting ",sub(10,4))

def multiply(q,w):
    # w=32
    # q=10
    return (q*w)
print(multiply(q =10,w=32)) # positioning of parameters does not matter when defined in such way,



def sum(x=1,y=2):           # x and y has default value
    print(x+y)
sum()

def minus(a=10,b=8):
    print(a-b)
minus(50,20)    #since arguments were passed default parameters are ignored
minus(11)       #here one value(a) has been given ,value of b (default) has been used
minus(b=1)      #here one value(b) has been given ,value of a (default) has been used