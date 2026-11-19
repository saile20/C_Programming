// trying to convert to upper/lower case

#include <stdio.h>

int main()
{
    char ch = '[';
    printf("Enter a character\n");

    // always use a space before %c so that any newline/space/tab from prev input is ignored
    scanf(" %c",&ch);
    // or ch = getchar();


    //checking if it is upper case
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch +32;
        printf("Lower case character is %c\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        ch = ch-32;
        printf("Upper case character is %c\n", ch);
    }

    else 
    {
        printf("%c is not an alphabet\n",ch);
    }

    return 0;   
}