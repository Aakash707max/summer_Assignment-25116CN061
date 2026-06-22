rows = 5

for i in range(1, rows + 1):
    # Print spaces
    print(" " * (rows - i), end="")

    # Ascending characters
    for ch in range(ord('A'), ord('A') + i):
        print(chr(ch), end="")

    # Descending characters
    for ch in range(ord('A') + i - 2, ord('A') - 1, -1):
        print(chr(ch), end="")

    print()
