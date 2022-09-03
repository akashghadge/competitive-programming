def func(A, N):
    A = sorted(A)
    sum = 0
    ans = 0
    for val in A:
        if(sum <= val):
            sum += val
            ans += 1
    return ans
