num = int(input("Enter a number: "))
fac = 1
while(num > 0):
    fac = fac * num
    num = num - 1
print("The factorial of the number is",fac)