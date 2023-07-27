/*Problem
To access CRED programs, one needs to have a credit score of 750 or more.Given that the present credit score is X, determine if one can access CRED programs or not.If it is possible to access CRED programs, output YES, otherwise output NO.*/
#include <stdio.h>

int main() {
    int x;
     scanf("%d",&x);
    if(x>=750){
        printf("yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}