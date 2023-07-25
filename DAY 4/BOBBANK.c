/*Problem
Bob has an account in the Bobby Bank. His current account balance is W rupees.Each month, the office in which Bob works deposits a fixed amount of X rupees to his account.Y rupees is deducted from Bob's account each month as bank charges.Find his final account balance after Z months. Note that the account balance can be negative as well.*/
#include <stdio.h>

int main(void) {
     int t,w,x,y,k,z;
     scanf("%d",&t);
     while(t--){
         scanf("%d\t%d\t%d\t%d",&w,&x,&y,&z);
         k=w+((x-y)*z);
         printf("%d\n",k);
     }
	return 0;
}


