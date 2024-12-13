import sys

file = open(sys.argv[1],"r+")

for line in file:
    currentLine = line.replace("Gujarat","Gujrat")
    print(currentLine,file=file,end='')

file.close()