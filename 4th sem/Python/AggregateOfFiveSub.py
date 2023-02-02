Ben = (int(input("Enter the marks of Bengali: ")))
Eng = (int(input("Enter the marks of English: ")))
His = (int(input("Enter the marks of History: ")))
Geo = (int(input("Enter the marks of Geography: ")))
Pol = (int(input("Enter the marks of Polscience: ")))
aggre = int((Ben + Eng + His + Geo + Pol) / 5)
print(aggre)
if (aggre >= 90):
    print("Outstanding")
elif (aggre >= 80 and aggre < 90):
    print("Excellent")
elif (aggre >= 70 and aggre < 80):
    print("Very good")
elif (aggre >= 60 and aggre < 70):
    print("Good")
elif (aggre >= 50 and aggre < 60):
    print("Poor")
else:
    print("Fail")