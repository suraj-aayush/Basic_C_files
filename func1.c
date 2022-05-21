// Online C compiler to run C program online
#include <stdio.h>


    void add();  //func deeclaration
    int main(){
        printf("func strated \n");
        
        add();  //func calling
        printf("\n func ended");

    return 0;
}
void add()
{ 
    int a,b,sum;
    printf("enter 2 num ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum of %d and %d is %d",a,b,sum);
}