#include<stdio.h>
int main()
{
    int i,j,k,m;
    i = 9 & 5;
    j = 9 | 5;
    k = 9 ^ 5;
    m = ~5;
    printf("Result: %d\n",i);
    printf("Result: %d\n",j);
    printf("Result: %d\n",k);
    printf("Result: %x\n",m);
    return 0;
}