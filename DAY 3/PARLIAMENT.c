/*Input Format
The first line contains a single integer 
T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two space-separated integers 
N and X — the total number of members present in the Parliament and the number of members who voted in favour of the resolution.*/

#include <stdio.h>

int main(void) {
     int t,y,x;
     scanf("%d",&t);
     while(t--){
         scanf("%d\t%d",&x,&y);
         if(x<=(y*2)){
             printf("Yes\n");
         }
         else if(x>(y*2)){
             printf("No\n");
         }
     }
	return 0;
}


