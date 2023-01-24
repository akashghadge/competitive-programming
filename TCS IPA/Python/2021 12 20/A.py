import sys
sys.stdin = open("input.txt", "r")
sys.stdout = open("output.txt", "w")
sys.stderr = open("error.txt", "w")


class Employee:
    def __init__(self, name, designation, salary, loan_details) -> None:
        self.name = name
        self.designation = designation
        self.salary = salary
        self.loan_details = loan_details


class Organization:
    def __init__(self, employee_list, loan_types, designation_limit) -> None:
        self.employee_list = employee_list
        self.loan_types = loan_types
        self.designation_limit = designation_limit

    def check_eligibility(self, name, loan_type, amount):
        # emp should present
        curr_employee = None
        for employee in self.employee_list:
            if(employee.name.lower() == name.lower()):
                curr_employee = employee
        if(curr_employee is None):
            return False, None
        # not taken loan of type
        if(curr_employee.loan_details.get(loan_type, -1) != -1):
            return False, None
        # loan type present in loan_type list
        if(self.loan_types.get(loan_type, -1) == -1):
            return False, None
        # borrowed all is not greater than sum+curr
        total = 0
        for loan in curr_employee.loan_details.values():
            total += loan
        total += amount
        if(total > self.designation_limit[curr_emp.designation]):
            return False, None
        # add this to employee loan details
        curr_employee.loan_details[loan_type] = amount
        # if yeas return true
        return True, curr_emp

    def get_designation_count(self):
        ans = {}
        for designation in self.designation_limit:
            ans.setdefault(designation, 0)
            for employee in self.employee_list:
                if(designation.lower() == employee.designation.lower()):
                    total = 0
                    for loan in employee.loan_details.values():
                        total += loan
                    if(total < self.designation_limit[designation]):
                        ans[designation] = ans.get(designation, 0)+1
        return ans


n = int(input())
emp_list = []
for _ in range(0, n):
    name = input()
    designation = input()
    salary = int(input())
    m = int(input())
    loan_details = {}
    for __ in range(0, m):
        k = input()
        v = int(input())
        loan_details[k] = v
    curr_emp = Employee(name, designation, salary, loan_details)
    emp_list.append(curr_emp)
loan_types = {}
designation_limit = {}

n = int(input())
for _ in range(0, n):
    loan_types[input()] = 0

n = int(input())
for _ in range(0, n):
    k = input()
    v = int(input())
    designation_limit[k] = v


org = Organization(emp_list, loan_types, designation_limit)
# loan eligibility
is_eligible, emp = org.check_eligibility(
    input(), input(), int(input()))
if(is_eligible):
    print("Granted")
    for k in emp.loan_details:
        print(k+" : "+str(emp.loan_details[k]))

# find count of eligible employees
ans = org.get_designation_count()
for val in ans:
    print(val+" "+str(ans[val]))
