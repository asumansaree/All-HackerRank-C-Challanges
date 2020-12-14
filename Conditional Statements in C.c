#include <stdio.h>

int main(void)
{
    int numbers[] = {1,2,3,4,5,6,7,8,9};
    char *names[] = {"one","two","three","four","five","six","seven","eight","nine"};
    int n;
    scanf("%d", &n);
    if(n>=1 && n<=9)
        for(int i=0; i<n; i++)
        {
            if(n == numbers[i])
                printf("%s",names[i]);
        }
    else
     printf("Greater than 9");
}

