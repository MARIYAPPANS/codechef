# cook your dish here
t=int(input(""))
while(t>0):
    A,B,C=list(map(int,input("").split()))
    D=A+B
    E=B+C
    F=A+C
    print(max(D,E,F))
    t=t-1