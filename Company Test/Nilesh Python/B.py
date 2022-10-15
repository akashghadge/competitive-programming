def gcd(a, b):
    if(b == 0):
        return abs(a)
    else:
        return gcd(b, a % b)


def lcm(a, b):
    return int((a * b) / int(gcd(a, b)))


def solve(arr, n):
    st = []
    st.append(arr[0])
    for i in range(1, n):
        if(gcd(st[len(st)-1], arr[i]) > 1):
            val = lcm(st[-1], arr[i])
            st.append(val)
            st.pop()
        else:
            st.append(arr[i])
    return st


t = int(input())
for _ in range(0, t):
    n = int(input())
    arr = list(map(int, input().strip(). split()))
    print(solve(arr, n))
