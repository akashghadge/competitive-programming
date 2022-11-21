lo = int(input())
hi = int(input())
curr = 5
if(lo > hi):
    lo, hi = hi, lo
while curr <= hi:
    if(curr >= lo):
        print(curr)
    curr *= 10
    curr += 5
