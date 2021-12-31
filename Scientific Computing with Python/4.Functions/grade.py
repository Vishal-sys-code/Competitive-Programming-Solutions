marks = input("Enter Score: ")
score = 0.0

try:
    score = float(marks)
except ValueError:
    print("Bad Score")
    quit()

def computegrade(grade):
    if 0.0 <= grade <= 1.0:
        if grade >= 0.9:
            return 'A'
        if grade >= 0.8:
            return 'B'
        if grade >= 0.7:
            return 'C'
        if grade >= 0.6:
            return 'D'
        return 'F'
    return 'Bad Score'

marks_in = computegrade(score)
print(marks_in)