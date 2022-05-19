#include<stdio.h>
int greatest(int,int);
int main(){
    int i,j,result;
    printf("enter i and j");
    scanf("%d %d",&i,&j);

    result=greatest(i,j);
    printf("%d is greatest ",result);

    return 0;
}

int greatest (int x, int y)
{
    if (x>y)
    return x;
    else
    return y;
}

























// void greatest(int a,int b);
// main()
// {
//     int i,j;
//     printf("enter no ");
//     scanf("%d %d",&i,&J);
//     greatest(i,j);
//     return 0;

// }

// void greatest (int x, int y)
// {
//     if(x>y)
//     printf("greter is%d",x);
//     else  printf("gretest is %d",y);
// }








































// #include<stdio.h>
// int greatest();
// int main()
// {
//     int result;
//     result=greatest();
//     printf("the result=%d",result);

//     return 0;
// }


// int greatest ()
// {
//     int i,j,greater;
//     printf("enter 2 ");
//     scanf("%d%d",&i,&j);

//     if(i>j)
//     {greater=i;}

//     else {greater=j;}

//     return greater;
// }