def solution(num_arr):
    total = sum(num_arr)

    
    if (total%2 != 0):
        return "NO"

    mid = total/2
    for num in num_arr:
        if (num > mid):
            return "NO"
    return "YES"

def main():
    m = int(input())
    for _ in range (m):
        s = input()
        arr = [int(char) for char in s.split()]
        print(solution(arr))
        
main()


