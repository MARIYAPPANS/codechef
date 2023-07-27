/*Input Format:
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of each test case contains an integer X — the battery health.*/
/*Output Format:
For each test case, output on a new line, YES, if the battery is in optimal condition, and NO otherwise.*/

#include <stdio.h>

int main(void) {
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    if(n>=80)
	    {
	        printf("Yes\n");
	    }
	    else{
	        printf("No\n");
	    }
	}
	return 0;
}

