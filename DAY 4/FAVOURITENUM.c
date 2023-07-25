/*Problem
Alice likes numbers which are even, and are a multiple of 7.
Bob likes numbers which are odd, and are a multiple of 9.
Alice, Bob, and Charlie find a number A.If Alice likes A, Alice takes home the number.
If Bob likes A, Bob takes home the number.If both Alice and Bob don't like the number Charlie takes it home.Given A, find who takes it home.*/
#include <stdio.h>

int main(void) {
     int t,x;
     scanf("%d",&t);
     while(t--){
         scanf("%d",&x);
         if(x%2==0 && x%7==0){
             printf("Alice\n");
         }
        else if(x%2!=0 && x%9==0){
             printf("Bob\n");
         }
         else {
             printf("Charlie\n");
         }
     }
	return 0;
}


