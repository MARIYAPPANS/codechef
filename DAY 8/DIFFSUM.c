#include <stdio.h>

int main(void) {
	int n,m;
	scanf("%d %d",&n,&m);
	if(n>m){
	    printf("%d",n-m);
	}
	else{
	    printf("%d",n+m);
	}
	return 0;
}

