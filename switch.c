
#include<stdio.h>
int main(){
    int choice;
    float l,b,r,area;

    printf("enter 1 for ar of circle \n");
    printf("enter 2 for ar of square \n");
    printf("enter 3 for ar of rectangle \n");
    printf("enter 4 for ar of triangle \n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
    printf("enter radius ");
    scanf("%f",&r);
        area= 3.14*r*r;
        printf("area is %.2f",area);
        break;

        case 2:
        printf("enter side of square ");
        scanf("%f",&l);
        area=l*l;
        printf("area is %.2f",area);
        break;

        case 3 :
        printf("enter length and breadth ");
        scanf("%f%f",&l,&b);
        area=l*b;
        printf("area is %.2f",area);
        break;

        case 4:
        printf("enter the breadth and height");
        scanf("%f%f",&l,&b);
        area=0.5*l*b;
        printf("area is %.2f sq units",area);
        break;
    
    default:
    printf("wrong choice ");
    return 0;

    }  }