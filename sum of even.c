#include <stdio.h>
int main()
{
    int i, n=100, sum=0;
    for(i=2; i<=n; i+=2)
    {
        sum += i;
    }
    printf("Sum of all even numbers from 1 to 100: %d", sum);
    return 0;
}
