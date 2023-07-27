#include <stdio.h>

int main() {
    int t;
    int x,y;
    scanf("%d",&t);
    while(t--){
        scanf("%d\t%d",&x,&y);
        if(x%y==0){
            printf("%d\n",(x/y));
        }
        else{
            int c=x%y;
            printf("%d\n",(x/y)+c);
        }
    }

    return 0;
}