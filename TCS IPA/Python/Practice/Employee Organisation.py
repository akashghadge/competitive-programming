import sys
sys.stdin = open("input.txt", "r")
sys.stdout = open("output.txt", "w")
sys.stderr = open("error.txt", "w")


class Employee:
    def __init__(self, name, id, age, gender) -> None:
        self.name = name
        self.id = id
        self.age = age
        self.gender = gender


class Organization:
    def __init__(self, name, employee_list) -> None:
        self.name = name
        self.employee_list = employee_list

    def addEmployee(self, name, id, age, gender):
        self.employee_list.append(Employee(name, id, age, gender))

    def getEmployeeCount(self):
        return len(self.employee_list)

    def findEmployeeAge(self, id):
        for employee in self.employee_list:
            if(employee.id == id):
                return employee.age
        return -1

    def countEmployees(self, age):
        cn = 0
        for employee in self.employee_list:
            if(employee.age > age):
                cn += 1
        return cn


n = int(input())
org = Organization('Temp', [])
for _ in range(0, n):
    org.addEmployee(input(), int(input()), int(input()), input())
print(org.getEmployeeCount())
print(org.findEmployeeAge(int(input())))
print(org.countEmployees(int(input())))
