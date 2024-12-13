import datetime 

class Person:
    def __init__(self,name,dateOfBirth,country):
        self.name = name
        self.dateOfBirth = dateOfBirth
        self.country = country

    def determineAge(self):
        date= str(self.dateOfBirth)
        birth = date.split("/")
        current_date = datetime.datetime.now()
        date_year,date_Month,date_day = int(birth[2]),int(birth[1]),int(birth[0])
        age = current_date.year - date_year
        if(current_date.month,current_date.day) < (date_Month,date_day):
            age-=1
        self.age = age

        
    
    def display(self):
        print(f"{self.name}\t{self.dateOfBirth}\t{self.country}\t{self.age}")
    

name = str(input("Enter the Name : "))
country = str(input("Enter the Country : "))
dateOfBirth = str(input("Enter the Date of Birth(DD/MM/YYYY)"))
isBirthTrue = False
try:
    date_format = "%d/%m/%Y"
    date_of_birth = datetime.datetime.strptime(dateOfBirth, date_format)
    isBirthTrue = True

except ValueError:
    print("Invalid Date of Birth")



if isBirthTrue:
    p = Person(name,dateOfBirth,country)
    p.determineAge()
    p.display()
    print("Person Age : " , p.age)



