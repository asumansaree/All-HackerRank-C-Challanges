#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int biggest_and=0,biggest_or=0,biggest_xor=0;
  for(int a = 1; a<n; a++)
  {
      for(int b = a+1; b<=n; b++)
        {
        int and = a & b;
        int or = a | b;
        int xor = a ^ b;
        
            if(and > biggest_and && and < k)
                biggest_and = and;
            if(or > biggest_or && or < k)
                biggest_or = or;
            if(xor > biggest_xor && xor < k)
                biggest_xor = xor;
        }
  }
  printf("%d\n%d\n%d\n",biggest_and,biggest_or,biggest_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

