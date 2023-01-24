import sys
sys.stdin = open("input.txt", "r")
sys.stdout = open("output.txt", "w")
sys.stderr = open("error.txt", "w")


class Student:
    def __init__(self, roll_no, name, marks_list) -> None:
        self.roll_no = roll_no
        self.name = name
        self.marks_list = marks_list

    def calculate_percentage(self):
        return sum(self.marks_list)/len(self.marks_list)

    def find_grade(self):
        percentage = self.calculate_percentage()
        if(percentage >= 80):
            return 'A'
        elif percentage >= 60:
            return 'B'
        elif percentage >= 40:
            return 'C'
        else:
            return 'F'
        return None


roll=int(input())
name=input()
n=int(input())
marks_list=[]
for _ in range(0,n):
    marks_list.append(int(input()))
student=Student(roll,name,marks_list)
print(int(student.calculate_percentage()))
print(student.find_grade())