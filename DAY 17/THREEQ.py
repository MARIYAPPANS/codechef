t=int(input(""))
while(t>0):
    a=list(map(int,input("").split()))
    b=list(map(int,input("").split()))
    p=0
    k=0
    for i in a:
        if(i==1):
            p=p+t
    for i in b:
        if(i==1):
            k=k+t
    if(k==p):
        print("Pass")
    else:
        print("Fail")
        
    t=t-1