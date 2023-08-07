t = int(input(""))
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    max_streak = 0
    streak = 0

    for i in range(n):
        if a[i] > 0 and b[i] > 0:
            streak += 1
            max_streak = max(max_streak, streak)
        else:
            streak = 0

    print(max_streak)
