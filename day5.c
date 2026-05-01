
#include <stdio.h>
int main()
{
    float num1;
    float num2;
    char opt;

    printf("********This is simple calculator\n");

    printf("Enter the Operator: ");
    scanf("%c",&opt);
    printf("Enter the number1: \n");
    scanf("%f",&num1);
    printf("Enter the number2: \n");
    scanf("%f",&num2);
    

    switch (opt)
    {
    case '+':
        printf("The sum is: %f\n",(num1+num2));
        break;
    case '-':
        printf("The sum is: %f\n",(num1-num2));
        break;
    case '*':
        printf("The sum is: %f\n",(num1*num2));
        break;
    case '/':
        printf("The sum is: %f\n",(num1/num2));
        break;
    
    default:
        printf("Plaese input right operator and value");
        break;
    }

    return 0;
}
