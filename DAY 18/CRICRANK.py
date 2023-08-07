# cook your dish here
t = int(input())
for i in range(t):
    l1 = list(map(int, input().split()))
    l2 = list(map(int, input().split()))
    A = 0
    B = 0
    for j in range(3):
        if l1[j] > l2[j]: A+=1 
        else: B+=1 
    if A > B: print("A")
    elif B > A: print("B")