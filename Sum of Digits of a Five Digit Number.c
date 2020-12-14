#include <stdio.h>

int main(void)
{
    int digit=0,n;
    scanf("%d",&n);

    for(int i=0; i<5; i++)
    {
        digit += n%10;
        n /= 10;
    }
    printf("%d",digit);       
}

