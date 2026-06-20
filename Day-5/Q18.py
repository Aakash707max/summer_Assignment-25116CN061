num = int(input("Enter a number to check: "))
temp = num
factorial_sum = 0

while temp > 0:
    digit = temp % 10
    
    digit_factorial = 1
    for i in range(1, digit + 1):
        digit_factorial *= i
    
    factorial_sum += digit_factorial
    
    temp //= 10

if factorial_sum == num:
    print(f"{num} is a Strong Number!")
else:
    print(f"{num} is NOT a Strong Number.")