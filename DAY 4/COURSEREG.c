/*Problem :
There is a group of N friends who wish to enroll in a course together. The course has a maximum capacity of M students that can register for it. If there are K other students who have already enrolled in the course, determine if it will still be possible for all the N friends to do so or not.*/
#include <stdio.h>

int main(void) {
     int t,n,m,k;
     scanf("%d",&t);
     while(t--){
         scanf("%d\t%d\t%d",&n,&m,&k);
         if((n+k)<=m){
             printf("Yes\n");
         }
         else {
             printf("No\n");
         }
     }
	return 0;
}


