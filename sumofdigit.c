#include <stdio.h>
int main(){
    int n,r,s=0;
    printf("enter number");
    scanf("%d",&n);

    while (n!=0)
    {r = n%10;
    s = s+r;
    n=n/10;
        /* code */
    }
    printf("sum is %d ",s);

return 0;
}