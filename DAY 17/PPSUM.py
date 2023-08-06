# cook your dish here

T=int(input())
for o in range(T):
    D,N=map(int,input().split())
    S=1
    for i in range(1,D+1):
        S=N*(N+1)//2
        N=S
    print(S)