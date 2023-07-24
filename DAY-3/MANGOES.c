/*Problem :
You are given that a mango weighs X kilograms and a truck weighs Y kilograms. You want to cross a bridge that can withstand a weight of Z kilograms.
Find the maximum number of mangoes you can load in the truck so that you can cross the bridge safely.*/
#include <stdio.h>

int main(void) {
     int t,w,x,y,k,z;
     scanf("%d",&t);
     while(t--){
         scanf("%d\t%d\t%d",&w,&x,&y);
         k=(y-x)/w;
         printf("%d\n",k);
     }
	return 0;
}
