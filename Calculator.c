#include<stdio.h>
int main()
{
    int num1, num2, sum, difference, product, op;
    float division;

    printf("Enter the value of Number1 :");
    scanf("%d", &num1);

    printf("Enter the value of Number2 :");
    scanf("%d", &num2);

    division = num1/num2;

    printf("Enter the value to use operator \n 1. Addition \n 2. Difference \n 3. Multiplication \n 4. Division \n");
    scanf("%d", &op);

    switch(op){
        case 1 : printf("Addition of %d and %d is %d ", num1, num2, num1+num2);
        break;
        case 2 : printf("Difference of %d and %d is %d ", num1, num2, num1-num2);
        break;
        case 3 : printf("Product of %d and %d is %d", num1, num2, num1*num2);
        break;
        case 4 : printf("Division of %d and %d is %f", num1, num2, division);
        break;
        default : printf("Enter a Valid Output");
    }
}
