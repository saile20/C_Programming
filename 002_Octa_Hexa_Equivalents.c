// program to ilustrate hexa and octa equivalents
#include <stdio.h>

int main()
{
    int aVar = 13;
    printf("Decimal to decimal %d \n",aVar);
    printf("Decimal to octal %o \n", aVar);
    printf("Decimal to Hexa %x\n", aVar);

    int bVar= 015;
    // anything starting with 0 is an octal value
    printf("Octal to decimal %d \n",bVar);
    printf("Octal to octal %o \n",bVar);
    printf("Octal to Hexa %x \n",bVar);

    int cVar = 0xd;
    // anything starting with 0x is a hexadecimal value 
    printf("Hexa to decimal %d \n", cVar);
    printf("Hexa to octal %o \n", cVar);
    printf("Hexa to Hexa %x \n", cVar);

}