def generate_fibonacci(n):
    n1,n2 = 0,1
    count = 0
    if n <= 0:
        print("Please enter a positive integer.")
    elif n == 1:
        print(f"Fibonacci sequence up to {n} term:")
        print(n1)
    else:
        print("Fibonacci sequence:")
        while count < n:
            print(n1, end=" ")
            nth = n1 + n2
            n1 = n2
            n2 = nth
            count += 1
        print() # Newline

terms = int(input("How many terms of the Fibonacci series do you want? "))
generate_fibonacci(terms)