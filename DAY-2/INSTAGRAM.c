/*Input Format
The first line of input will contain a single integer 
T, denoting the number of test cases.
Each test case consists of two space-separated integers 
X and Y — the following and follower count of an account, respectively.*/
/*Output Format
For each test case, output on a new line, YES, if the account is spam and NO otherwise.
*/

#include <stdio.h>

int main(void) {
     int t,x,y;
     scanf("%d",&t);
     while(t--){
         scanf("%d\t%d",&x,&y);
         if(x>(y*10)){
             printf("Yes\n");
         }
         else{
             printf("No\n");
         }
     }
	return 0;
}


