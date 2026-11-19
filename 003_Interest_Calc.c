//takes input from user and calculates simple interest

#include <stdio.h>

int main()
{
    int duration = 0;
    float principal_amount = 0;
    float interest_rate = 0.06;
    float interest = 0;

    printf("Enter duration\n");
    scanf("%d",&duration);

    printf("Enter principal\n");
    scanf("%f",&principal_amount);

    interest = interest_rate * principal_amount * duration;
    printf("%f\n",interest);

}