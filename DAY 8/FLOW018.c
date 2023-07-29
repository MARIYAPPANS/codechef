#include <stdio.h>

int main(void) {
	int t,n,i;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    int fact=1;
	    for(i=1;i<=n;i++){
	        fact=fact*i;
	        
	    }
	    printf("%d\n",fact);
	}
	return 0;
}

