# Write a program for Binary search.

def binary_search(lst, sele):
    low = 0
    high = len(lst) - 1

    for _ in range(len(lst)):
        if low <= high:
            mid = (low + high) // 2

            if lst[mid] == sele:
                return mid

            elif lst[mid] > sele:
                high = mid - 1

            else:
                low = mid + 1
        else:
            break

    return -1


lst = []
print("\n")
for i in range(5):
    val = int(input("Enter sorted value : "))
    lst.append(val)

sele = int(input("Enter the number to search: "))

result = binary_search(lst, sele)

if result != -1:
    print(f"Element {0} found at index {1}".format(sele, result))
else:
    print(f"Element {0} not found in the list".format(sele))
