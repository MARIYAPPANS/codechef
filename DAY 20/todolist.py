# cook your dish here
t=int(input(""))
while(t>0):
    n=int(input(""))
    a=list(map(int,input("").split()))
    c=0
    for i in a:
        if(i>=1000):
            c=c+1
    print(c)  
    t=t-1