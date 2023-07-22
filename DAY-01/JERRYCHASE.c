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

