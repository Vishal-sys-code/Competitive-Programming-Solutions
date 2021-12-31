hours = input("Enter Hours: ")
rate = float(input("Enter Rate: "))

if int(hours) <= 40:
    def computepay(hours, rate):
        return int(hours)*float(rate)
    x = computepay(hours, rate)
    print("Pay: ", x)

else:
    hourdifference = int(hours) - 40
    halfrate = float(rate)/2
    ratesum = (halfrate)+float(rate)
    def computepay(hourdifference,rate):
        balance = (40*(rate)) + (ratesum * hourdifference)
        return balance
    x = computepay(hourdifference, rate)
    # print("Pay: ") + str(x)
    print("Pay: ", x)