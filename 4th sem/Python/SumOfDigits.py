num = int(input("Enter an integer number: "))
sum = 0
while(num != 0):
    rem = num % 10
    sum = int(sum + rem)
    num = num / 10
print("Sum of the digits of the number is ", sum)