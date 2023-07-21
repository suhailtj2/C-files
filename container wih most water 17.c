#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char res[100];
    scanf("%[^\n]s",res);
    printf("%d",res[12]-'0'>1?49:1);
    return 0;
}
