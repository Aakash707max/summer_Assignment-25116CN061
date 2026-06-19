# First matrix input
A = []
print("Enter elements of first matrix:")
for i in range(2):
    row = []
    for j in range(2):
        x = int(input())
        row.append(x)
    A.append(row)

# Second matrix input
B = []
print("Enter elements of second matrix:")
for i in range(2):
    row = []
    for j in range(2):
        x = int(input())
        row.append(x)
    B.append(row)

# Addition of matrices
C = []
for i in range(2):
    row = []
    for j in range(2):
        row.append(A[i][j] + B[i][j])
    C.append(row)

# display result
print("Sum of matrices:")
for row in C:
    print(row)
    rows = len(A)
    cols = len(A[0])
    # Initialize a result matrix with zeros
    result = [[0 for _ in range(cols)] for _ in range(rows)]
    
    for i in range(rows):
        for j in range(cols):
            result[i][j] = A[i][j] + B[i][j]
            
    