#include <stdio.h>

int main(void) {
	int t,n,s[100],d[100];
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    int i,c=0;
	    for(i=0;i<n;i++){
	        scanf("%d",&s[i]);
	    }
	    for(i=0;i<n;i++){
	        scanf("%d",&d[i]);
	    }
	    for(i=0;i<n;i++){
	        if(s[i]==d[i]){
	            c=c+1;
	        }
	    }
	    printf("%d\n",c);
	}
	return 0;
}

