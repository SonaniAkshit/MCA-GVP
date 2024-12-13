# Print a Fibonacci strings.
# e.g:('A', 'B', 'BA', 'BAB', 'BABBA')

print("\n")
n = input("Enter the number: ")
n1 = "A"
n2 = "B"

if n.isdigit() and int(n) >= 0:

    for i in range(1, int(n) + 1):
        print(n1, end=" ")
        temp = n2 + n1
        n1 = n2
        n2 = temp
else:
    print("Please Enter A Positive Integer")