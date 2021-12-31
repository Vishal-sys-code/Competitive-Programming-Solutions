hours = int(input("Enter Hours: "))
rate = float(input("Enter Rate: "))

hourdifference = hours-40
compute = (40*rate)+((hourdifference*1.5)*rate)

if(hours < 40):
    print("Pay: ", hours*rate)
else:
    # compute = (40*rate)+(hourdifference*1.5)
    print("Pay: ",compute)
