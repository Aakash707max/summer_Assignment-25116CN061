rows = 5  

for i in range(rows):
    print(" " * (rows - i - 1) + "*" * (2 * i + 1))


# def print_star_pyramid(rows):
#     if not isinstance(rows, int) or rows <= 0:
#         print("Error: Number of rows must be a positive integer.")
#         return
    
#     for i in range(rows):
#         # Print spaces
#         print(" " * (rows - i - 1), end="")
#         # Print stars
#         print("*" * (2 * i + 1))

# # Example usage:
# try:
#     n = int(input("Enter number of rows for the pyramid: "))
#     print_star_pyramid(n)
# except ValueError:
#     print("Invalid input. Please enter an integer.")