#include <math.h>
#include <stdio.h>

int main()
{
    int i, sum, num,n, count = 0;
    printf("enter a number :");
    scanf("%d",&num);
    printf("All Armstrong number between 1 and %d are:\n",num);

    for (i = 1; i <= num; i++) {
        n = i;
        while (n != 0) {
            n/= 10;
            count++;
        }
        n = i;
        sum = pow(n % 10, count)
              + pow((n % 100 - n % 10) / 10, count)
              + pow((n % 1000 - n % 100) / 100, count);
        if (sum == i) {
            printf("%d ", i);
        }
        count = 0;
    }
}
