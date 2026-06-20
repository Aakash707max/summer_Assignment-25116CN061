def is_armstrong(num):
    
    num_str = str(num)
    power = len(num_str)
    
    total_sum = sum(int(digit) ** power for digit in num_str)
    
    return total_sum == num

number = int(input("Enter a number to check: "))
if is_armstrong(number):
    print(f"{number} is an Armstrong number.")
else:
    print(f"{number} is not an Armstrong number.")