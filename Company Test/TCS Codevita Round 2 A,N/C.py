def help_function(n, m, arr_grid, start, end):
    memo_arr = [[float('inf')] * (m + 1) for _ in range(n + 1)]
    memo_arr[start[0]][start[1]] = arr_grid[start[0] - 1][start[1] - 1]

    for i in range(start[0], end[0] + 1):
        for j in range(start[1], end[1] + 1):
            if i > start[0]:
                memo_arr[i][j] = min(memo_arr[i][j], memo_arr[i - 1][j] + arr_grid[i - 1][j - 1])
            if j > start[1]:
                memo_arr[i][j] = min(memo_arr[i][j], memo_arr[i][j - 1] + arr_grid[i - 1][j - 1])

    return memo_arr[end[0]][end[1]] if memo_arr[end[0]][end[1]] != float('inf') else -1

n, m = map(int, input().split())
arr_grid = [list(map(int, input().split())) for _ in range(n)]
start = tuple(map(int, input().split()))
end = tuple(map(int, input().split()))

output_final = help_function(n, m, arr_grid, start, end)
print(output_final)