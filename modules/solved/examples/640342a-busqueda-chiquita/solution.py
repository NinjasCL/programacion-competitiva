from sys import stdin, stdout

total, questions_asked = map(int, stdin.readline().split())
heights = sorted(map(int, stdin.readline().split()))

while questions_asked > 0:
  needle = int(stdin.readline())
  nearest = min(heights, key = lambda height: abs(height - needle))
  count = heights.index(nearest) if nearest >= needle else total
  stdout.write(f"{count}\n")
  questions_asked -= 1
