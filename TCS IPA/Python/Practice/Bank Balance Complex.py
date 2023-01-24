import sys
sys.stdin = open("input.txt", "r")
sys.stdout = open("output.txt", "w")
sys.stderr = open("error.txt", "w")


class Account:
    def __init__(self, num, name, balance) -> None:
        self.num = num
        self.name = name
        self.balance = balance

    def deposit_money(self, dep_amt):
        self.balance += dep_amt
        return self.balance

    def withdraw_money(self, with_amt):
        if(self.balance-with_amt < 1000):
            return 0
        self.balance -= with_amt
        return self.balance


num = int(input())
name = input()
balance = float(input())
account = Account(num, name, balance)
q = int(input())
for _ in range(0, q):
    act = input()
    amount = float(input())
    if(act == 'd'):
        print(account.deposit_money(amount))
    elif(act == 'w'):
        res = account.withdraw_money(amount)
        if(res):
            print(res)
        else:
            print("insufficient amount")
