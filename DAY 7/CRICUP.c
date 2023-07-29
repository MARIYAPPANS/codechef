// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
    int t,i;
    int x,y,d;
    scanf("%d",&t);
    while(t--){
        scanf("%d\t%d\t%d",&x,&y,&d);
        int c=abs(x-y);
        if(c<=d){
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
       }
        
    

    return 0;
}