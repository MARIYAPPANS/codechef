/*Input Format:The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of one integers  X — the current rank of Chef.
Output Format:
For each test case, output on a new line, YES, if Chef made it to the top 10*/



#include <stdio.h>
int main(void) {
	int T,X;
	scanf("%d",&T);
	
	for(int i = 0; i<T;i++){
	    scanf("%d",&X);
	    if(X<=10){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	
	
	
	return 0;
}

