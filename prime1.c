#include <stdio.h>
int main() {
    int n=100,c=0,i=1;

    while(i<=100)
    {
        if (n%i==0)
        {
            c++;
        }
        i++;
    }
    printf("%d",i);



    return 0;
}

