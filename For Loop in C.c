#include <stdio.h>

int main(void)
{
    int numbers[] = {1,2,3,4,5,6,7,8,9};
    char *names[] = {"one","two","three","four","five","six","seven","eight","nine"};
    int a,b,n;
    scanf("%d %d", &a,&b);
    n = b-a;
    for(int j=0; j<=n; j++)
    {
        if(a>=1 && a<=9)
        {
        for(int i=0; i<a; i++)
        {
            if(a == numbers[i])
                printf("%s\n",names[i]);
        }
        }
        else if(a>10 && a%2 == 1)
            printf("odd\n");
        else
            printf("even\n");
        a++;
    }     
}
