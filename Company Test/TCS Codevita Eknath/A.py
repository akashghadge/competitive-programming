from collections import deque
import sys


def is_valid(x, y, rows, cols):
    return 0 <= x < rows and 0 <= y < cols


def maze_runner(maze, start, target):
    rows, cols = len(maze), len(maze[0])
    directions = [(1, 0), (-1, 0), (0, 1), (0, -1)]

    queue = deque(
        [(start[0], start[1], 0, 0, 0)]
    )  # (x, y, distance, crossed_3_count,crossed_2_count)
    visited = set([(start[0], start[1], 0)])

    while queue:
        x, y, distance, crossed_3_count, crossed_2_count = queue.popleft()

        if (x, y) == target:
            return distance

        for dx, dy in directions:
            nx, ny = x + dx, y + dy

            if (
                is_valid(nx, ny, rows, cols)
                and (nx, ny, crossed_3_count) not in visited
            ):
                if maze[nx][ny] == 3:
                    new_crossed_3_count = crossed_3_count + 1
                    if new_crossed_3_count > 1:
                        continue
                    queue.append((nx, ny, distance + 1, new_crossed_3_count))
                elif maze[nx][ny] != 1:
                    queue.append((nx, ny, distance + 1, crossed_3_count))

                visited.add((nx, ny, crossed_3_count))

    return "STUCK"


# Input
rows, cols = map(int, input().split())
maze = [list(map(int, input().split())) for _ in range(rows)]
start = tuple(map(int, input().split()))
target = tuple(map(int, input().split()))

# Output
result = maze_runner(maze, start, target)
sys.stdout.write(str(result) + "\n")
