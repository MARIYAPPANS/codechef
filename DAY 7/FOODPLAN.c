
#include <stdio.h>

int main() {
    int t;
    int n,m;
    scanf("%d",&t);
    while(t--){
        scanf("%d\t%d",&n,&m);
        float d=10.0/100;
        float c=n-(n*(d));
        
        if(c<m){
          printf("ONLINE\n");
        }
       
        else if(c>m){
             printf("DINING\n");
        }
        else if(c==m){
            printf("EITHER\n");
        }
    }

    return 0;
}