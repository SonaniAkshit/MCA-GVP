# Primality testing: Given a positive integer,
# check if the number is prime or not.

number1=int(input("Enter any Number: "))
number=int(number1)
if(number>1):
    for i in range(2,(number//2)+1):
        if(number%i)==0:
            print("\n")
            print("Not Prime.")
            break
    else:
        print("\n")
        print("Prime.")