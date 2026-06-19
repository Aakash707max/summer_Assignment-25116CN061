# Input matrix
A = []

print("Enter elements of matrix:")
for i in range(2):
    row = []
    for j in range(2):
        x = int(input())
        row.append(x)
    A.append(row)

# Find diagonal sum
sum = 0
for i in range(2):
    sum = sum + A[i][i]

# Display result
print("Sum of diagonal elements =", sum)