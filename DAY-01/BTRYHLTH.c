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
