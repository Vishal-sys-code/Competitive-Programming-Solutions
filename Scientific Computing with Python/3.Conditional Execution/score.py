score = input("Score: ")

try:
    marks = float(score)
except:
    print("Enter a number")

if 0.0 < marks < 1.0:
    if(marks >= 0.9):
        print("A")
    elif(marks>=0.8):
        print("B")
    elif(marks>=0.7):
        print("C")
    elif(marks>=0.6):
        print("D")
    elif(marks<0.6):
        print("F")
else:
    print("Bad Marks")