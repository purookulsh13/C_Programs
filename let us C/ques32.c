#include<stdio.h>

void main()
{
    char ascii;
    int i;

    for(i=0;i<=255;i++)
    {
        printf("%c = %d\n", i, i);
    }
}