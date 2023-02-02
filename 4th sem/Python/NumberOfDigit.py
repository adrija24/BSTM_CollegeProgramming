num = int(input("Enter a number: "))
count = 0
while(num > 0):
    rem = num % 10
    count = count + 1
    num = num // 10
print("The number of digits in this number is ", count)