#include <stdio.h>

int main()
{
    int account_id = 5678;
    int age = 25;
    double mass = 56.6;
    char Grade = 'S';

    printf("Account ID: %d Age: %d\n", account_id, age);
    printf("The mass is: %f\n", mass);

    // going to use scanf function to read input from user keyboard
    printf("Please enter updated age");
    scanf("%d",&age);
        /* scanf reads the string provided by the OS into the relavant 
            variable as the right format. 
        */


    printf("The updated age is %d\n",age);
}