class Shape:
    def area():
        return 0
    
class Square(Shape):
    def __init__(self,length):
        self.__length = length
    
    def area(self):
        return (self.__length * self.__length)
    

length = int(input("Enter the length for Square : "))
s = Square(length)
print("Area of Square : ",s.area())