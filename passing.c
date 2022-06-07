#include<stdio.h>
int main() {
    int n1,n2,n3;
    float total;

    printf("enter marks of 3 subjects ");
    scanf("%d %d %d ",&n1,&n2,&n3);

    total=(n1+n2+n3)/3;

    if (total>=40)
    {

        if (n1>33 && n2>33 && n3>33)
        {
            printf("you have successfully passed \n "); }
        else{
            printf("you are failed"); }
    }

    else {
        printf("you are failed bcuz you have less than 40 percent");
    }


return 0;
}