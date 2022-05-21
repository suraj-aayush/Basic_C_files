
#include<stdio.h>
int diff(int a,int b){
    int diff;
    diff=a-b;
    printf("%d minus %d is %d ",a,b,diff);

return 0;
}

int main(){
    int a,b;
    printf("enter two numbers ");
    scanf("%d %d",&a,&b);

    diff(a,b);
   
    return 0;
}