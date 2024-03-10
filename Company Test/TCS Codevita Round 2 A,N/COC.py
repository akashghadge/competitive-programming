def solution_for_the_problem(itemDamage, totalSize, itemCategory, maxSize):
    ans = 0
    n = len(itemDamage)

    for mask in range(1 << n):
        curr_ans = 0
        current_size = 0

        selected_categories = set()

        for i in range(n):
            if mask & (1 << i):
                curr_ans += itemDamage[i]
                current_size += totalSize[i]
                selected_categories.add(itemCategory[i])

        if current_size <= maxSize and len(selected_categories) == bin(mask).count('1'):
            ans = max(ans, curr_ans)

    return ans
itemDamage = list(map(int, input().split()))
totalSize = list(map(int, input().split()))
itemCategory = list(map(int, input().split()))
maxSize = int(input())

final_output = solution_for_the_problem(itemDamage, totalSize, itemCategory, maxSize)
print(final_output)