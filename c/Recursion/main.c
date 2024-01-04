#include <stdio.h>
#include "recursion.h"

int main()
{
    int n = 0;
    printf("input n:\n");
    scanf("%d", &n);
    printf("the result is %ld\n", rec(n));

    return 0;
}