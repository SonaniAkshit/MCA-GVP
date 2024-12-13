import sys

def WriteFile(fileName,content):
    file = open(fileName,"w")
    file.write(content)
    file.close()


def ReadFile(fileName):
    file = open(fileName,"r")
    content = file.read()
    print(content)


def copyFile(fileName,destinationFileName):
    file = open(fileName,"r")
    content= file.read()

    copyfile = open(destinationFileName,"w")
    copyfile.write(content)

    file.close()
    copyfile.close()


fileName = sys.argv[1]

content = input("Enter a content Which you wann to insert : ")
WriteFile(fileName,content)
ReadFile(fileName)

destinationFileName = sys.argv[2]
copyFile(fileName,destinationFileName)
ReadFile(destinationFileName)