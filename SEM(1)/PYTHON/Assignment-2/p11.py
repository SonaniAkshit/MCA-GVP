import sys

fileName = sys.argv[1]

def add(courseName,credit,earn):
    file = open(fileName,"a")
    newEntry = courseName+" "+credit+" "+earn+"\n"
    file.write(newEntry)
    file.close()

def computeCGPA():
    credit = 0
    earned = 0
    total = 0
    totalcredit = 0
    file = open(fileName,"r")
    for line in file:
        cc,cr,ea = line.split()
        credit = int(cr)
        earned = int(ea)
        total += (credit*earned)
        totalcredit += credit

    if(totalcredit != 0):
        CGPA = total/totalcredit
    else:
        return None
    file.close()
    return CGPA



while True:
    
    print("Enter 1 for new course")
    print("Enter 2 for calculate CGPA")
    choice = int(input("Enter Choice : "))

    if choice == 1 :
        courseName = input("Enter course Name : ")
        credit = input("Enter the total credit : ")
        earn = input("Enter the earned credit : ")
        add(courseName,credit,earn)

    if choice == 2 :
        print("Your CGPA : " ,computeCGPA())