#include <stdio.h>

int main() 
{
    char s[100];
    fgets(s, sizeof(s), stdin);  // read string
    printf("Hello, World!\n");
    puts(s);  // display string
    return 0;
}
