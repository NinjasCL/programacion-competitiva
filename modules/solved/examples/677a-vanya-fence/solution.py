# python3 solution.py
friends, fence = map(int, input().split())
heights = map(int, input().split())

total = friends
for height in heights:
    total += 1 if height > fence else 0

print(total)