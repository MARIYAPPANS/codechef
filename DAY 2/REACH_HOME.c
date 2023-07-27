/*Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of each test case contains two space-separated integers X and 
Y — the amount of fuel in Chef’s motorcycle and the distance to Chef’s home in kilometres*/
/*Output Format
For each test case, output YES, if Chef can reach home on his motorcycle. Otherwise output NO.*/
#include <stdio.h>

int main(void) {
    int t,X,Y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d\t%d",&X,&Y);
        if((X*5)>=Y){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    
    }
	return 0;
}



