hours = (input("Enter Hours: "))
rate = (input("Enter Rate: "))

try:
    pay = hours*rate
    print(pay)

except:
    print("Error, please enter numeric value")