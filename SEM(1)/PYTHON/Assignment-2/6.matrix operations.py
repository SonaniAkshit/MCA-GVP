# Create a module for matrix operations.
# Steps
# 1. Initialize Matrix.
# 2. Print Matrix.
# 3. Addition of Matrix.
# 4. Multiplication of Matrix.

def initialize_matrix(rows, cols):
    matrix = []
    for i in range(rows):
        row = list(map(int, input(f"Enter row {i+1} (space-separated values): ").split()))
        if len(row) != cols:
            raise ValueError("Number of columns must match the specified value")
        matrix.append(row)
    return matrix

def print_matrix(matrix):
    for row in matrix:
        print(" ".join(map(str, row)))

def add_matrices(matrix1, matrix2):
    if len(matrix1) != len(matrix2) or len(matrix1[0]) != len(matrix2[0]):
        raise ValueError("Matrices must have the same dimensions to add")
    result = [[matrix1[i][j] + matrix2[i][j] for j in range(len(matrix1[0]))] for i in range(len(matrix1))]
    return result

def multiply_matrices(matrix1, matrix2):
    if len(matrix1[0]) != len(matrix2):
        raise ValueError("Number of columns in the first matrix must be equal to the number of rows in the second matrix")
    result = [[sum(matrix1[i][k] * matrix2[k][j] for k in range(len(matrix1[0]))) for j in range(len(matrix2[0]))] for i in range(len(matrix1))]
    return result

# Example usage:
rows1 = int(input("Enter the number of rows for the first matrix: "))
cols1 = int(input("Enter the number of columns for the first matrix: "))
matrix1 = initialize_matrix(rows1, cols1)

rows2 = int(input("Enter the number of rows for the second matrix: "))
cols2 = int(input("Enter the number of columns for the second matrix: "))
matrix2 = initialize_matrix(rows2, cols2)

print("Matrix 1:")
print_matrix(matrix1)

print("Matrix 2:")
print_matrix(matrix2)

added_matrix = add_matrices(matrix1, matrix2)
print("Added Matrix:")
print_matrix(added_matrix)

multiplied_matrix = multiply_matrices(matrix1, matrix2)
print("Multiplied Matrix:")
print_matrix(multiplied_matrix)
