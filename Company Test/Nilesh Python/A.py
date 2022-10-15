def solve(str, ch):
    n = len(str)
    cn = 0
    for curr in str:
        if ch == curr:
            cn += 1
    if(cn == 0):
        return 0
    while(cn <= (n/2)):
        n -= 1
    return n

t = int(input())
for i in range(0, t):
    str,ch = input().split()
    print(solve(str, ch))
