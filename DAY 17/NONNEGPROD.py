t=int(input(""))
while(t>0):
    n=int(input(""))
    a=list(map(int,input("").split()))
    p=1
    for i in a:
        p=p*i
    if(p<0):
        print("1")
    else:
        print("0")
    t=t-1