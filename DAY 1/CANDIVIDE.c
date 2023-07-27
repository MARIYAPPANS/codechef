/*Input Format:
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single integer N - the number of candies.*/
/*Output Format:
For each test case, output YES, if we can distribute all the candies between the three friends equally. Otherwise output NO.*/

#include <stdio.h>

int main(void) {
	int t,n;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    if(n%3==0){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	}
	return 0;
}

