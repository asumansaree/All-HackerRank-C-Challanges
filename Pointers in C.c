#include <stdio.h>
void update(int *a, int *b);
int main(void)
{
        int a,b;
        scanf("%d %d", &a, &b);
        update(&a,&b);
        printf("%d\n", a);
        printf("%d", b);    
}

void update(int *a, int *b)
{
    int x = *a + *b;
    if(*a - *b <0)
        *b = (*b - *a);
    else 
        *b = (*a - *b);
    
*a = x;
}
