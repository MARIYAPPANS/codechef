
/*Input Format :
The first line of input will contain a single integer T,denoting the number of test case.
The first and only line of each test case contains three space-separated integers N,X,and Y — the number of pages, the number of pages Chef can read in a day, and the number of days.*/
/*Output Format
For each test case, output on a new line, YES, if Chef can complete the whole book in given time, and NO otherwise.*/

#include <stdio.h>

int main(void) {
    int t,N,X,Y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d\t%d\t%d",&N,&X,&Y);
        if(N<=(X*Y)){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
	return 0;
}

