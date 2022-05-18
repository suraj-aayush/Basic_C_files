#include <stdio.h>
#include<math.h>
int main(){
    int n,i,a;
    printf("enetr a nunber ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        a=n*i;
        printf("%d x %d = %d \n",n,i,a);
    }
    return 0;
}