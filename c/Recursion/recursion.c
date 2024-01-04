#include <stdio.h>

long rec(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n*rec(n-1);
}