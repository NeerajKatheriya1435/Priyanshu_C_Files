
#include <stdio.h>
int main()
{
    // int table=5567;
    // for (int i = 1; i < 11; i++)
    // {
    //     printf("%d\n",i*table);
    // }
    // printf("1\n");
    // printf("2\n");
    // printf("3\n");
    // printf("4\n");

    // int i=1;
    // int table=8;
    // while (i<11)
    // {
    //     // printf("%d\n",i*table);
    //     printf("%d * %d = %d\n",table,i,(table*i));
    //     i++;
    // }
    // // 5*5=25

    // int a; // Declaration
    // a=7;  // Initilization
    // int b=7; // 

    // int i=0;
    // do
    // {
    //     printf("Hello");
    //     i++;
    // } while (i>11);

    // for (int i = 1; i < 11; i++)
    // {
    //     if(i==5){
    //         break;
    //     }
    //     printf("%d\n",i);
    // }

    for (int i = 1; i < 11; i++)
    {
        if(i==5){
            continue;
        }
        printf("%d\n",i);
    }
    
    
    return 0;
}
