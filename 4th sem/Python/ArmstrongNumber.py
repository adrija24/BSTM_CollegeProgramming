num = int(input("Enter a number: "))
sum = 0 
tmp = num
while(num > 0):
    rem = num % 10
    sum = sum + (rem ** 3)
    num = num // 10
if (sum == tmp):
    print("It is an armstrong number")
else:
    print("It is not an armstrong number")