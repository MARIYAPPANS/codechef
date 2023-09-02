# cook your dish here
t = int(input())

for _ in range(t):
    n = int(input())
    p = [0] * n
    s = [0] * n
    
    for i in range(n):
        p[i], s[i] = map(int, input().split())
    
    score = [0] * 12
    for i in range(n):
        score[p[i]] = max(score[p[i]], s[i])
    
    ans = sum(score[1:9])
    print(ans)
