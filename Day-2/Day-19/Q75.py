    
A = []

print("Enter elements of matrix:")
for i in range(2):
    row = []
    for j in range(2):
        x = int(input())
        row.append(x)
    A.append(row)

# Transpose matrix
T = []
for i in range(2):
    row = []
    for j in range(2):
        row.append(A[j][i])
    T.append(row) 
    #display matrix
print("Transpose of matrix:")
for row in T:
    print(row)