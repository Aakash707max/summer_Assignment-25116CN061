def check_perfect (n):

    if n<=0 :
        return False

    sum = 0
    for i in range ( 1 , n ):
        if n%i==0 :
            sum += i

    return sum == n        

n = int(input("ENTER a number to Check"))      
if check_perfect (n):
    print( f"{n} is a perfect number.")        
else :
    print( f"{n} is not a perfect number.")    