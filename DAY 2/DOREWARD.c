/*Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case contains an integer X, denoting the number of blood donations the person has made.*/
/*Output Format
For each test case, output on a new line:

BRONZE, if the person has made less than or equal to 3 donations;
SILVER, if the person has made more than 3 but less than equal to 6
GOLD, if the person has made more than 6 donations.
*/
#include <stdio.h>

int main(void) {
    int t,N,X,Y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&X);
        if(X<=3){
            printf("BRONZE\n");
        }
        else if(X>=3 && X<=6){
            printf("SILVER\n");
        }
        else if(X>6){
            printf("GOLD\n");
        }
    }
	return 0;
}

