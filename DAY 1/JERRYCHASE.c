/*Input Format:
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two space-separated integers X and Y — the speeds of Jerry and Tom respectively.*/
/*Output Format:
For each test case, output on a new line, YES, if Tom will be able to catch Jerry. Otherwise, output NO.*/

#include <stdio.h>

int main(void) {
	int t,n=0,m=0;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d\t%d",&n,&m);
	    if(n<m)
	    {
	        printf("Yes\n");
	    }
	    else{
	        printf("No\n");
	    }
	}
	return 0;
}

