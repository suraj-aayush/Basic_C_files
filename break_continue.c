
#include <stdio.h>
int main(){
    int a,b;
    printf("BREAK PROGRAM IS BELOW");
    for ( a = 1; a <4; a++)
    {
        for (b=a; b < 4; b++)
        {
            if(a==b)
            break;
            printf("\n %d%d",a,b);
            
        }
    }
return 0;
}
// -----------------------------------------------------------------------------

// #include <stdio.h>
// int main(){
//     int i,j;
//     for ( i = 1; i <4; i++)
//     {
//         for (j=i; j < 4; j++)
//         {
//             if(i==j)
//             continue;
//             printf("\n %d%d",i,j);
            
//         }
//     }
// return 0;
// }