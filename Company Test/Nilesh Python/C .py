def solve(str):
    left = []
    right = []
    last = 1e9
    for i in range(0, len(str)):
        if(str[i] == 's'):
            left.append(0)
            last = i
        else:
            if(last != 1e9):
                left.append(i-last)
            else:
                left.append(last)
    temp = str[::-1]
    last = 1e9
    for i in range(0, len(temp)):
        if(temp[i] == 's'):
            right.append(0)
            last = i
        else:
            if(last != 1e9):
                right.append(i-last)
            else:
                right.append(last)
    right = right[::-1]
    ans = []
    for i in range(0, len(left)):
        ans.append(min(right[i], left[i]))
    for i in range(0, len(ans)):
        print(ans[i], end=" ")
    print()


t = int(input())
for i in range(0, t):
    str = input()
    solve(str)
