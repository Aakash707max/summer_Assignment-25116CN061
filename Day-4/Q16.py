def print_armstrong_in_range(start, end):
    print(f"Armstrong numbers between {start} and {end} are:")
    for num in range(start, end + 1):
        num_str = str(num)
        power = len(num_str)
        
        total_sum = sum(int(digit) ** power for digit in num_str)
        
        if total_sum == num:
            print(num, end=" ")
    print() # Newline

lower = int(input("Enter lower bound of the range: "))
upper = int(input("Enter upper bound of the range: "))
print_armstrong_in_range(lower, upper)