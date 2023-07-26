
#include <stdio.h>

int main() {
    int t,a[100];
    int n,x,i;
    scanf("%d",&t);
    while(t--){
        scanf("%d\t%d",&n,&x);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int c=0;
         for(i=0;i<n;i++){
            if(a[i]>=x){
                c=c+1;
            }
        }
    printf("%d\n",c);
    }

    return 0;
}

