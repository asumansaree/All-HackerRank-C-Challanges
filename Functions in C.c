#include <stdio.h>
int max_of_four(int max[]);
int main(void)
{
    int max[4];
    for(int i =0; i<4; i++)
    {
        scanf("%d",&max[i]);
    }
    int result = max_of_four(max);
    printf("%d",result);
}

int max_of_four(int max[])
{
    int biggest = max[0];
    for(int j = 1; j<4; j++)
    {
        if(max[j]>=biggest)
            biggest = max[j];
    }
    return biggest;
}
