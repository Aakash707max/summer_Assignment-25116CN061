lower = int(input("Enter lower limit: "))
upper = int(input("Enter upper limit: "))

print(f"Prime numbers between {lower} and {upper} are:")
for num in range(lower, upper + 1):
    if num > 1:
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                break
        else:
            print(num, end=" ")
print() # New line ke liye