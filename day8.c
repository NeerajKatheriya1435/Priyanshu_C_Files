

#include <stdio.h>
#include <stdbool.h>

// int fact(int num1){
    
//     int factResult=1;
//     for (int i = 1; i <= num1; i++)
//     {
//         factResult=factResult*i; // 2,3
//     }
//     return factResult;
// };


int main()
{
    // int num1;

    // printf("Enter the number you want fact: \n");
    // scanf("%d",&num1);
    // int result=fact(num1);
    // printf("The factorial is: %d\n",result);

    // Swap The value

    // int a=7;
    // int b=6;

    // int c=b;
    // b=a;
    // a=c;

    // b=a+b; // 13
    // a=b-a; //6
    // b=b-a;
   
// 0,1,1,2,3

    // int a=0;
    // int b=1;
    // int temp=0;

    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d ",a); //0,1

    //     temp=b; //1,1
    //     b=a+b; //1,
    //     a=temp; //1

    // }
    

    // printf("%d\n",a);
    // printf("%d\n",b);


    int a;
    printf("Enter the num to check prime or not: \n");
    scanf("%d",&a);

    bool b1=0;

    // printf("%d",b1);

    for (int i = 2; i < a; i++)
    {
        if(a%i==0){
            b1=1;
            break;
        }
    }

    if(b1){
        printf("Not Prime Number");
    }else{
        printf("Prime Number");
    }

    return 0;
}
