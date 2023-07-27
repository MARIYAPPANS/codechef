#include<stdio.h>

int main()
{
    int t;
    int x,y,z;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d\t%d\t%d",&x,&y,&z);
    if(x>3)
    {
      int di=x/3;
      int dit=x%3;
      if(dit==0){
    printf("%d\n",(x*y)+(z*(di-1)));}
    else{
       printf("%d\n",(x*y)+(z*di));
    }
    }
    else{
    printf("%d\n",(x*y));
    }
  }
    return 0;
}