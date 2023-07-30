
#include <stdio.h>

int main() {
  int t;
  scanf("%d",&t);
  while(t--){
      int n,x,p;
      scanf("%d\t%d\t%d",&n,&x,&p);
     int z=x*3;
     int  y=n-x;
    int  k=z-y;
    if(k>=p){
        printf("PASS\n");
    }
    else{
        printf("FAIL\n");
    }
      
  }

    return 0;
}