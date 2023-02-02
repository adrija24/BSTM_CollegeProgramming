num = int(input("Enter a number: "))
flag = 0
if(num == 2):
    print("Prime Number")
else:
    for i in range (2, num):
        if(num % i == 0):
            flag = 1
            break
    if(flag == 1):
        print("Non Prime number")
    else:
        print("Prime Number")



