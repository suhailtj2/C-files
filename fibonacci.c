#include<stdio.h>

int main()
{

    int val ,n1=0 , n2=1 ,n3 ;
    int i;

    printf("Enter a value :");
    scanf("%d",&val);

    printf("\n%d\n%d",n1,n2);

    for(i=2;i<val;i++)
    {
    n3=n1+n2;
    n1=n2;
    n2=n3;

    printf("\n%d",n3);
    }
    return 0;
}
