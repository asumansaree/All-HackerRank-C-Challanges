#include <stdio.h>

int main(void)
{
    char ch;
    char s[20];
    char sen[100];
    scanf("%c", &ch);
    scanf("%s\n", s);
    fgets(sen, sizeof(sen), stdin);  // read string
    
    printf("%c\n",ch);
    printf("%s\n",s);
    puts(sen);  // display string   
}

