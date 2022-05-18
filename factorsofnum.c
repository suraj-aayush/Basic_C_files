#include <stdio.h>
int main(){
    int n,i,c;
    printf("enter num");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++){

        if(n%i==0){
            printf("%d \n",i);
        }
    }

return 0;
}   