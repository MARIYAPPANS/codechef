/*Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.Each test case consists of one line of input, containing a single integer X — the amount of time from now at which Chef's exam starts.*/
/*Output Format:
For each test case, output on a new line the answer — YES if Chef will finish his episode before the exam starts, and NO otherwise.*/

#include <stdio.h>

int main(void) {
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    if(n>24)
	    {
	        printf("Yes\n");
	    }
	    else{
	        printf("No\n");
	    }
	}
	return 0;
}


