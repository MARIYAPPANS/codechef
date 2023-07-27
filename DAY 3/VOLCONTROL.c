/*Problem
Chef is watching TV. The current volume of the TV is X. Pressing the volume up button of the TV remote increases the volume by 1 while pressing the volume down button decreases the volume by 1 Chef wants to change the volume from X to Y. Find the minimum number of button presses required to do so.*/

#include <stdio.h>

int main(void) {
     int t,x,y,c;
     scanf("%d",&t);
     while(t--){
         scanf("%d\t%d",&x,&y);
         if(x>y){
             c=x-y;
             printf("%d\n",c);
         }
         else if(x<y){
             c=y-x;
             printf("%d\n",c);
         }
         else 
         {
             c=x-y;
             printf("%d\n",c);
         }
     }
	return 0;
}


