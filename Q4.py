num = int(input("Enter a number: "))
count = 0

# Negative number to positive number
n = abs(num)

if n == 0:
    count = 1
else:
    while n > 0:
        n = n // 10  
        count += 1

print("Total number of digits:", count)