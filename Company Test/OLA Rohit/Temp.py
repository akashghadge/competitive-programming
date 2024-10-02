def sol(a, b, n):
    b_extended = b + b
    max_equal = 0
    for shift in range(n):
        equal_count = 0
        for i in range(n):
            if a[i] == b_extended[shift + i]:
                equal_count += 1
        max_equal = max(max_equal, equal_count)

    return max_equal


a = [10, 20, 30, 60, 50]
b = [20, 30, 60, 50, 10]
n = len(
    a
)  # Size of the lists (you can use len(a) or len(b), assuming both lists have the same size)

# Call the function
result = sol(a, b, n)
print(result)  # Output the result
