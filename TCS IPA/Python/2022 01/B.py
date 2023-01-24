import sys
sys.stdin = open("input.txt", "r")
sys.stdout = open("output.txt", "w")
sys.stderr = open("error.txt", "w")


class Employee:
    def __init__(self, id, name, role, age) -> None:
        self.id = id
        self.name = name
        self.role = role
        self.age = age
        self.eligibility = None


class Organization:
    def __init__(self, emp_list, role_wise_eligibility) -> None:
        self.emp_list = emp_list
        self.role_wise_eligibility = role_wise_eligibility

    def employee_eligibility(self):
        ans = []
        for employee in self.emp_list:
            need = self.role_wise_eligibility[employee.role]
            status = ""
            if(need == employee.age):
                status = "eligible"
            elif(need < employee.age):
                status = "overdue"
            else:
                status = str(need-employee.age)+" years left"
            ans.append({
                employee.id: status
            })
        return ans


n = int(input())
employee_list = []
role_wise_eligibility = {}
for _ in range(0, n):
    emp_id = int(input())
    emp_name = input()
    role = input()
    age = int(input())
    emp_name = emp_name.lower()
    role = role.lower()
    curr_emp = Employee(emp_id, emp_name, role, age)
    employee_list.append(curr_emp)

for _ in range(0, 3):
    role = input()
    role = role.lower()
    role_wise_eligibility[role] = int(input())
org = Organization(employee_list, role_wise_eligibility)

ans = org.employee_eligibility()
for val in ans:
    for key in val:
        print(str(key)+" "+val[key])
