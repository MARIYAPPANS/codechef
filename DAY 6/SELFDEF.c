// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int t,i;
    int n,a[100];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int c=0;
        for( i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
        if(a[i]>=10 && a[i]<=60){
         c=c+1;
        }
       }
        printf("%d\n",c);
        
    }

    return 0;
}