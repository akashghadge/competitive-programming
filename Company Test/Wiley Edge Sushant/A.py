# Read input strings from user
s1 = input().strip()
s2 = input().strip()

# Calculate minimal difference
min_diff = sum([s1[i] != s2[i] and '?' not in (s1[i], s2[i]) for i in range(len(s1))])

# Calculate maximal difference
max_diff = sum([s1[i] != s2[i] or '?' in (s1[i], s2[i]) for i in range(len(s1))])

# Print results
print(min_diff, max_diff)