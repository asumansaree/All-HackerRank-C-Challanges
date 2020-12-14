#include <stdio.h>
int recursion(int n);
int numbers[3];
int main(void)
{
    int m;
    scanf("%d",&m);
    scanf("%d %d %d",&numbers[0],&numbers[1],&numbers[2]);
    if(m <= 3)
        printf("%d\n",m);
    else
        printf("%d\n",recursion(m));
}

int recursion(int n)
{
    if(n==1)
        return numbers[0];
    else if(n ==2)
        return numbers[1];
    else if(n==3)
    {
        return numbers[2];
    }
    else
    {
         return recursion(n-1) + recursion(n-2) + recursion(n-3);
    }
}

