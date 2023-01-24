import sys
sys.stdin = open("input.txt", "r")
sys.stdout = open("output.txt", "w")
sys.stderr = open("error.txt", "w")


pat = input()
str = input()
pat = pat.lower()
str = str.lower()
dict = {}
for ch in str:
    dict[ch] = dict.get(ch, 0)+1
f = 0
for ch in pat:
    if(dict.get(ch, 0) == 0):
        f = 1
if(f):
    print("Invalid")
else:
    print("Valid")
