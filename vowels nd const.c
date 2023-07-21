#include<stdio.h>

void function( char str[])
{

    int v=0,c=0, i;
    char ch;

    for(i=0;str[i]!='\0';i++)
       {
        ch=str[i];

        if (ch == 'a' || ch == 'e'|| ch == 'i' || ch == 'o'
        || ch == 'u' || ch == 'A'|| ch == 'E' || ch == 'I'
        || ch == 'O' || ch == 'U')

        v++;

    else if(ch== ' ')
        continue;
    else
        c++;
        }
printf("\nVOWELS :%d",v);
printf("\nCONSONANTS :%d",c);
}

int main()
{
    char str[10];
    printf("Enter a string :");
    scanf("%s",&str);
    function(str);
    return 0;
}
