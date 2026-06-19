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

# Subtraction of matrices
C = []
for i in range(2):
    row = []
    for j in range(2):
        row.append(A[i][j] - B[i][j])
    C.append(row)

# Display result
print("Difference of matrices:")
for row in C:
    print(row)