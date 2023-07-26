/*There is said to be a monopoly in the market if the profit made by one company is strictly greater than the sum of profits made by all other companies.*/
#include <stdio.h>

int main() {
    int t,p,q,r,s;
    scanf("%d",&t);
    while(t--){
        scanf("%d\t%d\t%d\t%d",&p,&q,&r,&s);
        int temp=0;
        if((p>q) && (p>r) && (p>s)){
            temp=p;
        }
        else if((q>p) && (q>r) && (q>s)){
            temp=q;
        }
        else if((r>p) && (r>q) && (r>s)){
            temp=r;
        }
        else{
            temp=s;
        }
      int temp2=p+q+r+s;
      int temp3=temp2-temp;
      if(temp>temp3){
          printf("yes\n");
      }
      else{
          printf("No\n");
      }
    }
    
    return 0;
}