#include<stdio.h>

int main()
{
    int t;
    int n,x,k;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d\t%d\t%d",&n,&x,&k);
    if(k>=x){
        int t=k/x;
        if(t>n){
            printf("%d\n",n);
        }
        else
        {
            printf("%d\n",t);
        }
        
    }
    else{
        int n=0;
        printf("%d\n",n);
    }
  }
    return 0;
}