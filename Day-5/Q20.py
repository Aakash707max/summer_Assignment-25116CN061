def largest_prime_factor(n):
    divisor = 2

    while divisor * divisor <= n:
        if n % divisor == 0:
            n //= divisor  
        else:
            divisor += 1   
            
    return n

number = int(input("Enter a positive integer: "))
result = largest_prime_factor(number)
print(f"The largest prime factor of {number} is: {result}")