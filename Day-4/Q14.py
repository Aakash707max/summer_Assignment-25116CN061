def find_nth_fibonacci(n):
    
    if n <= 0:
        return "Invalid input. Please enter a positive integer."
    elif n == 1:
        return 0
    elif n == 2:
        return 1
    
    a, b = 0, 1
    for _ in range(3, n + 1):
        a, b = b, a + b
    return b 
    
position = int(input("Enter the position (n) of the Fibonacci term: "))
result = find_nth_fibonacci(position)
print(f"The {position}th Fibonacci term is: {result}")