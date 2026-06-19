import math

num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))

# Formula: LCM = (a * b) // GCD
lcm_res = (num1 * num2) // math.gcd(num1, num2)

print(f"The LCM of {num1} and {num2} is: {lcm_res}")