# python3 solution-bs.py
def candidate_is_valid(quantity_to_solve, available_time):
  used_time = 0
  for i in range(1, quantity_to_solve + 1):
    used_time += i * 5
  return used_time <= available_time
    
def find_max_quantity_of_solved_problems(total_problem_count, available_time):
    low = 0
    high = total_problem_count

    answer = high

    while low <= high:
        candidate = low + (high - low) // 2

        if candidate_is_valid(candidate, available_time):
            answer = candidate
            low = candidate + 1
        else:
            high = candidate - 1
            
    return answer

def main():
    n, k = map(int, input().split())
    available_time = 240 - k
    print(find_max_quantity_of_solved_problems(n, available_time))
    
if __name__ == "__main__":
  main()