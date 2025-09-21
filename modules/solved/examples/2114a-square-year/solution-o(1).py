# python3 solution-o(1).py
import math

t = int(input())
for _ in range(0, t):
  year = int(input())
  b = int(math.sqrt(year))
  if (math.pow(b, 2) == year):
    print(0, b)
  else:
    print(-1)