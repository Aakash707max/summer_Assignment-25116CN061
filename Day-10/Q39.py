rows = 5

# Outer loop for each row
for i in range(1, rows + 1):
    # Print leading spaces to center the numbers
    for j in range(rows - i):
        print(" ", end="")
    # Print increasing numbers in the row
    for k in range(1, i + 1):
        print(k, end="")
    # Print decreasing numbers in the row starting from i-1 to 1
    for l in range(i - 1, 0, -1):
        print(l, end="")
    
    print()