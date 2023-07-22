/*Input Format:
The first and only line of input will contain a single integer N: the number of people present in Chef's team.*/
/*Output Format
Print the answer: Yes if Chef's team is eligible to participate, and No otherwise.*/
#include <stdio.h>

int main(void) {
	int num;
	scanf("%d",&num);
		if(num>=6 && num<=8){
	    printf("YES");
	}
	else
	{
	    printf("NO");
	}
}

