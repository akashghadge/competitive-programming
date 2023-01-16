import sys
sys.stdin = open("input.txt", "r")
sys.stdout = open("output.txt", "w")
sys.stderr = open("error.txt", "w")


class Account:
    def __init__(self, card_number, pin, balance, withdraw_amount, account_type):
        self.card_number = card_number
        self.pin = pin
        self.balance = balance
        self.withdraw_amount = withdraw_amount
        self.account_type = account_type

    def withdraw(self, withdraw_amount):
        if(self.balance >= withdraw_amount):
            self.balance -= withdraw_amount
            self.withdraw_amount = withdraw_amount
            return True
        else:
            return False


class ATM:
    def __init__(self, branch_name, account_list) -> None:
        self.branch_name = branch_name
        self.account_list = account_list

    def withdraw_from_accounts(self, card_number, pin, withdraw_amount):
        found = False
        account_withdraw = {}
        for account in self.account_list:
            if(account.pin == pin and card_number == account.card_number):
                res = account.withdraw(withdraw_amount)
                if(res):
                    account_withdraw = account
                    found = True

        if(not found):
            return None
        return account_withdraw

    def account_type_filter(self, account_type):
        answer = {}
        for account in self.account_list:
            if(account.account_type == account_type):
                answer[account.card_number] = account.balance
        if(len(answer) == 0):
            return None
        return answer


account_list = []
acc_n = int(input())
for _ in range(0, acc_n):
    cn = int(input())
    pn = int(input())
    bal = float(input())
    withAm = float(input())
    at = input()
    account = Account(cn, pn, bal, withAm, at)
    account_list.append(account)
atm_obj = ATM('ATM branch name', account_list)
card_number = int(input())
pin = int(input())
withdraw_amount = float(input())
res = atm_obj.withdraw_from_accounts(card_number, pin, withdraw_amount)
if(res is None):
    print("Not able to withdraw")
else:
    print(str(res.card_number) + " " +
          str(res.balance)+" "+str(res.withdraw_amount))
search_type = input()
found_account = atm_obj.account_type_filter(search_type)
if(found_account == None):
    print("No account found")
else:
    for account in found_account.keys():
        print(str(account)+" "+str(found_account[account]))
