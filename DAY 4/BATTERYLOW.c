/*Problem
Chef's phone shows a Battery Low notification if the battery level is 15% or less.
Given that the battery level of Chef's phone is X%, determine whether it would show a Battery low notification.*/
#include <stdio.h>

int main(void) {
     int t,x;
     scanf("%d",&t);
     while(t--){
         scanf("%d",&x);
        if(x<=15){
        printf("yes\n");
    }
    else{
        printf("No\n");
    }
     }
	return 0;
}


