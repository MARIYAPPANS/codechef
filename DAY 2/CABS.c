/*Input Format :
The first line will contain T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains two integers 
X and Y - the prices of first and second cab services respectively.*/
/*Output Format
For each test case, output FIRST if the first cab service is cheaper, output SECOND if the second cab service is cheaper, output ANY if both cab services have the same price.*/

#include <stdio.h>

int main(void) {
     int t,x,y;
     scanf("%d",&t);
     while(t--){
         scanf("%d\t%d",&x,&y);
         if(x<y){
             printf("First\n");
         }
         else if(x>y){
             printf("second\n");
         }
         else if(x==y){
             printf("Any\n");
         }
     }
	return 0;
}

