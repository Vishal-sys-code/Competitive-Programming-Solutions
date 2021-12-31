# import math

hours = int(input("Enter Hours: "))
rate = float(input("Enter Rate: "))
hourdifference = hours - 40
halfrate = rate/2
ratesum = halfrate+rate

def computepay(hours,rate):
    if(hours < 40):
        pay = hours*rate
        print("Pay:", pay)
    else:
        pay = (40*rate) + (ratesum * hourdifference)
        print("Pay:", pay)

computepay(hours, rate)