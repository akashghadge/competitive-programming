import sys
sys.stdin = open("input.txt", "r")
sys.stdout = open("output.txt", "w")

def sol():
    n = int(input())
    strs = [None]*n
    for i in range(0, n):
        strs[i] = input()
    search = input()
    for i in range(0, n):
        if(search == strs[i]):
            print("Position of the searched string is: ", +i)
            return
    print("String not found")


sol()
