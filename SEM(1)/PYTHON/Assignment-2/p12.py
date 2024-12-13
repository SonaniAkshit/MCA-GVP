import sys

fileName = sys.argv[1]
phones = {}
githubs = {}


def readAll():
    writeAll()
    file = open(fileName,"r")
    for line in file:
        name,phone,github = line.split(' ')
        print("Name : {} , Phone : {} , Github : {}".format(name,phone,github),end="")
    file.close()

def writeAll():
    file = open(fileName,"w")
    for name in phones:
        print(name+ " " +phones[name]+" "+githubs[name],file=file,end="\n")
    file.close()

def add(name,phone,github):
    phones[name] = phone
    githubs[name] = github

def remove(name):
    del(phones[name])
    del(githubs[name])

def updatePhone(name,phone):
    phones[name] = phone

def updateGithub(name,github):
    githubs[name] = github

def printByName(name):
    return [name,phones[name],githubs[name]]

def printAll():
    fullList = []
    for name in phones:
        name,phone,github = printByName(name)
        details = [name,phone,github]
        fullList.append(details)
    return fullList

while True:
    print("Enter 1 for add Friend information")
    print("Enter 2 for remove Friend information")
    print("Enter 3 for update phone in Friend information")
    print("Enter 4 for update github in Friend information")
    print("Enter 5 for print Friend information by name")
    print("Enter 6 for print all Friends information")
    print("Enter 7 for read all Friend information form file")

    record = ['1','2','3','4','5','6','7','8']
    choice = (input("Enter the Choice : "))

    if choice not in record:
        print("Enter valid choice")
    else:
        choice = int(choice)
        if choice == 1:
            name = input("Enter the friend name : ")
            phone = input("Enter the friend phone : ")
            github = input("Enter the friend github :")
            add(name,phone,github)

        if choice == 2:
            name = input("Enter the friend name for remove: ")
            remove(name)

        if choice == 3:
            name = input("Enter the friend name : ")
            phone = input("Enter the friend phone for update : ")
            updatePhone(name,phone)

        if choice == 4:
            name = input("Enter the friend name : ")
            github = input("Enter the friend github for update :")
            updateGithub(name,github)

        if choice == 5:
            name = input("Enter the friend name for print: ")
            name,phone,github = printByName(name)
            print("Name : {} , Phone : {} , Github : {}".format(name,phone,github))
        
        if choice == 6:
            list = printAll()
            for i in range(0,len(list)):
                print("Name : {} , Phone : {} , Github : {}".format(list[i][0],list[i][1],list[i][2]))
    
        if choice == 7:
            readAll()