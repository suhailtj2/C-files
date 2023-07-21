#include <stdio.h>
int main()
{
char s[100];
    scanf("%[^\n]c",s);
    int i=0,n=0;
    while(s[i]!='\0'){
        if(s[i]>='0' && s[i]<='9'){
            n= n*10 + (s[i]-'0');
        }
        i++;
    }
    i=0;
    char res[100];
    while(n>26){
        res[i] = 'A';
        i++;
        n=n-26;
    }
    res[i] = 'A' + n -1;
    printf("\"");
    for(int i=0;res[i]>='A' && res[i]<='Z';i++){
        printf("%c",res[i]);
    }
    printf("\"");
    return 0;

}
