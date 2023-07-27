#include<stdio.h>

int main()
{
    int t;
    int n,m;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d\t%d",&n,&m);
   int total=n*2;
   int left=total/2;
   int right= total-left;
    if(m==0)
    {
    
    printf("%d\n",n*2);
    }
    else if(m>=left)
    {
    printf("%d\n",right);
    }
    else if(m<=left)
    {
    printf("%d\n",right+(left-m));
    }
   }
    return 0;
}