/*Ezio can manipulate at most 
X number of guards with the apple of eden.
Given that there are Y number of guards, predict if he can safely manipulate all of them.*/

#include <stdio.h>

int main(void) {
     int t,y,x;
     scanf("%d",&t);
     while(t--){
         scanf("%d\t%d",&x,&y);
         if(x>=y){
             printf("Yes\n");
         }
         else if(x<y){
             printf("No\n");
         }
     }
	return 0;
}


